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

extern uint8_t char_a[8];
extern uint8_t char_b[8];
extern uint8_t char_c[8];
extern uint8_t char_d[8];
extern uint8_t char_e[8];
extern uint8_t char_f[8];
extern uint8_t char_g[8];
extern uint8_t char_h[8];
extern uint8_t char_i[8];
extern uint8_t char_j[8];
extern uint8_t char_k[8];
extern uint8_t char_l[8];
extern uint8_t char_m[8];
extern uint8_t char_n[8];
extern uint8_t char_o[8];
extern uint8_t char_p[8];
extern uint8_t char_q[8];
extern uint8_t char_r[8];
extern uint8_t char_s[8];
extern uint8_t char_t[8];
extern uint8_t char_u[8];
extern uint8_t char_v[8];
extern uint8_t char_w[8];
extern uint8_t char_x[8];
extern uint8_t char_y[8];
extern uint8_t char_z[8];

void MATRIX_Write(uint8_t address, uint8_t data);
void MATRIX_WriteRotate(uint8_t address, uint8_t data);
void MATRIX_Init();
void MATRIX_Clear();

#endif
