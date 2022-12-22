# I2C_CHLCD
i2c lm016 lcd STM32 library

1. Config i2c in IOC (CubeMX) file 
2. Add .c/.h files to your Project
3. Add #include "i2c-lcd.h" in main.c file
4. Add lcd_init() on main function
5. then you can use this function:

void lcd_putchar (char ch); // send character to the lcd

void lcd_puts (char *str); // send string to the lcd

void lcd_gotoxy(int col, int row); // put cursor at the entered position row (0 or 1), col (0-15);

void lcd_clear (void); // Clear all data printed on lcd



# Persian Tutorial
https://digispark.ir/stm32-lcd-i2c/
