#include "main.h"
#include "joystick.h"

uint8_t JOYSTICK_ReadRegister(uint8_t reg) {
	uint8_t value;
	HAL_I2C_Mem_Read(&hi2c1, JOYSTICK_I2C_ADDRESS << 1, reg, I2C_MEMADD_SIZE_8BIT, &value, 1, I2C_TIMEOUT);
	return value;
}

uint8_t JOYSTICK_WriteRegister(uint8_t reg, uint8_t data) {
	return HAL_I2C_Mem_Write(&hi2c1, JOYSTICK_I2C_ADDRESS << 1, reg, I2C_MEMADD_SIZE_8BIT, &data, 1, I2C_TIMEOUT);
}

void JOYSTICK_GetCoords(int8_t *x, int8_t *y) {
	*x = (int8_t)JOYSTICK_ReadRegister(JOYSTICK_X);
	*y = (int8_t)JOYSTICK_ReadRegister(JOYSTICK_Y);
}

void JOYSTICK_Init() {
	HAL_GPIO_WritePin(JOYSTICK_RST_PORT, JOYSTICK_RST_PIN, GPIO_PIN_RESET);
	HAL_Delay(10);
	HAL_GPIO_WritePin(JOYSTICK_RST_PORT, JOYSTICK_RST_PIN, GPIO_PIN_SET);
	HAL_Delay(100);

	printf("doing reset\r\n"); // DEBUG

	uint8_t data = 0;
	uint8_t reset_cmd = 0x0F;
	do {
		data = JOYSTICK_ReadRegister(reset_cmd);
	} while (data != 0xF0 && data != 0xF1);
	HAL_Delay(10);

	printf("reset worked\r\n"); // DEBUG
}
