#include "main.h"
#include "matrix.h"

#include <string.h>

uint8_t char_a[] = {
    0b00111100,
    0b01000010,
    0b10000001,
    0b10000001,
    0b11111111,
    0b10000001,
    0b10000001,
    0b10000001
};

uint8_t char_b[] = {
    0b11111110,
    0b10000001,
    0b10000001,
    0b11111110,
    0b10000001,
    0b10000001,
    0b10000001,
    0b11111110
};

uint8_t char_c[] = {
    0b01111110,
    0b10000001,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000001,
    0b01111110,
    0b00000000
};

uint8_t char_d[] = {
    0b11111100,
    0b10000010,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000010,
    0b11111100,
    0b00000000
};

uint8_t char_e[] = {
    0b11111111,
    0b10000000,
    0b10000000,
    0b11111110,
    0b10000000,
    0b10000000,
    0b11111111,
    0b00000000
};

uint8_t char_f[] = {
    0b11111111,
    0b10000000,
    0b10000000,
    0b11111110,
    0b10000000,
    0b10000000,
    0b10000000,
    0b00000000
};

uint8_t char_g[] = {
    0b01111110,
    0b10000001,
    0b10000000,
    0b10001111,
    0b10000001,
    0b10000001,
    0b01111110,
    0b00000000
};

uint8_t char_h[] = {
    0b10000001,
    0b10000001,
    0b10000001,
    0b11111111,
    0b10000001,
    0b10000001,
    0b10000001,
    0b00000000
};

uint8_t char_i[] = {
    0b01111110,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b01111110,
    0b00000000
};

uint8_t char_j[] = {
    0b01111110,
    0b00000100,
    0b00000100,
    0b00000100,
    0b00000100,
    0b10000100,
    0b01111100,
    0b00000000
};

uint8_t char_k[] = {
    0b10000001,
    0b10000110,
    0b10011000,
    0b11100000,
    0b10011000,
    0b10000110,
    0b10000001,
    0b00000000
};

uint8_t char_l[] = {
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b11111111,
    0b00000000
};

uint8_t char_m[] = {
    0b10000001,
    0b11000011,
    0b10100101,
    0b10111101,
    0b10011001,
    0b10000001,
    0b10000001,
    0b10000001
};

uint8_t char_n[] = {
    0b10000001,
    0b11000001,
    0b10100001,
    0b10010001,
    0b10001001,
    0b10000101,
    0b10000011,
    0b00000000
};

uint8_t char_o[] = {
    0b01111110,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b01111110,
    0b00000000
};

uint8_t char_p[] = {
    0b11111110,
    0b10000001,
    0b10000001,
    0b11111110,
    0b10000000,
    0b10000000,
    0b10000000,
    0b00000000
};

uint8_t char_q[] = {
    0b01111110,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10010001,
    0b10001001,
    0b01111110,
    0b00000001
};

uint8_t char_r[] = {
    0b11111100,
    0b10000010,
    0b10000010,
    0b11111100,
    0b10100000,
    0b10010000,
    0b10001000,
    0b10000100
};

uint8_t char_s[] = {
    0b01111110,
    0b10000001,
    0b10000000,
    0b01111110,
    0b00000001,
    0b10000001,
    0b01111110,
    0b00000000
};

uint8_t char_t[] = {
    0b11111111,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00000000
};

uint8_t char_u[] = {
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b10000001,
    0b01111110,
    0b00000000
};

uint8_t char_v[] = {
    0b10000001,
    0b10000001,
    0b10000001,
    0b01000010,
    0b01000010,
    0b00100100,
    0b00011000,
    0b00000000
};

uint8_t char_w[] = {
    0b10000001,
    0b10000001,
    0b10000001,
    0b10111001,
    0b10111001,
    0b10111001,
    0b01000110,
    0b00000000
};

uint8_t char_x[] = {
    0b10000001,
    0b01000010,
    0b00100100,
    0b00011000,
    0b00011000,
    0b00100100,
    0b01000010,
    0b10000001
};

uint8_t char_y[] = {
    0b10000001,
    0b10000001,
    0b01000010,
    0b00100100,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00000000
};

uint8_t char_z[] = {
    0b11111111,
    0b00000001,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b11111111,
    0b00000000
};

uint8_t matrixData[8] = {0};

void MATRIX_Write(uint8_t address, uint8_t data) {
	HAL_GPIO_WritePin(MATRIX_CS_PORT, MATRIX_CS_PIN, GPIO_PIN_RESET);
	HAL_SPI_Transmit(&hspi1, &address, 1, HAL_MAX_DELAY);

	HAL_SPI_Transmit(&hspi1, &data, 1, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(MATRIX_CS_PORT, MATRIX_CS_PIN, GPIO_PIN_SET);
}

void MATRIX_WriteRotate(uint8_t address, uint8_t data) {
	if (address >= 0x01 && address <= 0x08) { // check if 8x8 matrix row
		matrixData[address - 1] = data;

		uint8_t rotatedData[8] = {0}; // 90 degree rot

		for (uint8_t row = 0; row < 8; row++) {
			for (uint8_t col = 0; col < 8; col++) {
				if (matrixData[row] & (1 << col)) {
					rotatedData[col] |= (1 << (7 - row));
				}
			}
		}

		for (uint8_t i = 0; i < 8; i++) {
			MATRIX_Write(i + 1, rotatedData[i]);
		}
	} else {
		MATRIX_Write(address, data);
	}
}

void MATRIX_Clear() {
	memset(matrixData, 0, sizeof(matrixData));
  for (uint8_t i = 1; i <= 8; i++) {
  	MATRIX_Write(i, 0x00);
  }
}

void MATRIX_Init() {
	MATRIX_Write(MATRIX_SHUTDOWN_REG, 0x01); // enable display
	MATRIX_Write(MATRIX_DECODE_MODE, 0x00); // no bcd decoding
	MATRIX_Write(MATRIX_INTENSITY, 0x00); // low brightness
	MATRIX_Write(MATRIX_SCAN_LIMIT, 0x07); // display all 8 rows
	MATRIX_Write(MATRIX_DISPLAY_TEST, 0x00);
}
