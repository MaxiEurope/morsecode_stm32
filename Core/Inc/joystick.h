#ifndef JOYSTICK_H
#define JOYSTICK_H

#define JOYSTICK_I2C hi2c1
extern I2C_HandleTypeDef JOYSTICK_I2C;

#define JOYSTICK_CS_PIN GPIO_PIN_0
#define JOYSTICK_CS_PORT GPIOB

#define JOYSTICK_RST_PORT GPIOB
#define JOYSTICK_RST_PIN GPIO_PIN_1


#define JOYSTICK_I2C_ADDRESS 0x40
#define I2C_TIMEOUT 100

#define JOYSTICK_X 0x10
#define JOYSTICK_Y 0x11

uint8_t JOYSTICK_ReadRegister(uint8_t reg);
uint8_t JOYSTICK_WriteRegister(uint8_t reg, uint8_t data);
void JOYSTICK_GetCoords(int8_t *x, int8_t *y);
void JOYSTICK_Init();

#endif
