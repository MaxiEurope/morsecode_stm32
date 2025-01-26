#ifndef MATRIX_H
#define MATRIX_H

#include <string.h>

#define MATRIX_SPI hspi1
extern SPI_HandleTypeDef MATRIX_SPI;

#define MATRIX_CS_PORT GPIOA
#define MATRIX_CS_PIN GPIO_PIN_6


#define MATRIX_SHUTDOWN_REG 0x0C
#define MATRIX_DECODE_MODE 0x09
#define MATRIX_INTENSITY 0x0A
#define MATRIX_SCAN_LIMIT 0x0B
#define MATRIX_DISPLAY_TEST 0x0F

extern uint8_t char_m[8];

void MATRIX_Write(uint8_t address, uint8_t data);
void MATRIX_WriteRotate(uint8_t address, uint8_t data);
void MATRIX_Init();
void MATRIX_Clear();

#endif
