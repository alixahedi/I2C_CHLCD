#include "stm32f1xx_hal.h"

void lcd_init (void);   // initialize lcd

void lcd_send_cmd (char cmd);  // send command to the lcd

void lcd_send_data (char data);  // send data to the lcd

void lcd_putchar (char ch);  // send character to the lcd

void lcd_puts (char *str);  // send string to the lcd

void lcd_gotoxy(int col, int row);  // put cursor at the entered position row (0 or 1), col (0-15);

void lcd_clear (void);
