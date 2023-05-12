/*
 * File:   mainTarea4.c
 * Author: Amilcar Rodriguez
 */

#include <xc.h>
#pragma config FOSC = HS // Configurar el oscilador externo
#pragma config WDTE = OFF // Desactivar el Watchdog Timer
#pragma config LVP = OFF // Desactivar la programación de baja tensión
#define _XTAL_FREQ 20000000 // Definición de la frecuencia de reloj

void main() {
    TRISD = 0; // Configurar el puerto D como salidas
    while(1) { // Bucle infinito
        PORTD = 0b10000000; // Encender LED8
        __delay_ms(50);
        PORTD = 0b01000000; // Encender LED7
        __delay_ms(50);
        PORTD = 0b00100000; // Encender LED6
        __delay_ms(50);
        PORTD = 0b00010000; // Encender LED5
        __delay_ms(50);
        PORTD = 0b00001000; // Encender LED4
        __delay_ms(50);
        PORTD = 0b00000100; // Encender LED3
        __delay_ms(50);
        PORTD = 0b00000010; // Encender LED2
        __delay_ms(50);
        PORTD = 0b00000001; // Encender LED1
        __delay_ms(50);
        PORTD = 0b00000010; // Encender LED2
        __delay_ms(50);
        PORTD = 0b00000100; // Encender LED3
        __delay_ms(50);
        PORTD = 0b00001000; // Encender LED4
        __delay_ms(50);
        PORTD = 0b00010000; // Encender LED5
        __delay_ms(50);
        PORTD = 0b00100000; // Encender LED6
        __delay_ms(50);
        PORTD = 0b01000000; // Encender LED7
        __delay_ms(50);
        PORTD = 0b10000000; // Encender LED8
        __delay_ms(50);
        PORTD = 0; // Apagar todos los LEDs
        __delay_ms(100);
        PORTD = 0b11110000; // Encender los LEDs 1 al 4
        __delay_ms(100);
        PORTD = 0b00001111; // Encender los LEDs 5 al 8
        __delay_ms(100);
        PORTD = 0b01010101; // Encender los LEDs impares
        __delay_ms(100);
        PORTD = 0b10101010; // Encender los LEDs pares
        __delay_ms(100);
        PORTD = 0b11000000; // Encender los LEDs 7 y 8
        __delay_ms(100);
        PORTD = 0b00111100; // Encender los LEDs 3, 4, 5 y 6
        __delay_ms(100);
        PORTD = 0b00000011; // Encender los LEDs 1 y 2
        __delay_ms(100);
        PORTD = 0b11111111; // Encender todos los LEDs
        __delay_ms(250);
        PORTD = 0; // Apagar todos los LEDs
        __delay_ms(250);
    }
}
