/*
 * File:   main.c
 * Author: GRUPO 1
 *
 * Created on 20 de Maio de 2021, 14:03

 * -------------------------------------------------
 *          MAPA DE ENTRADAS E SAIDAS
 * -------------------------------------------------
 *  Pinos   |nº     | Conexão
 * ---------|-------|-------------------------------
 *  RD2     |21     | LCD_RS
 *  RD3     |22     | LCD_EN
 *  RD4     |27     | LCD_D4
 *  RD5     |28     | LCD_D5
 *  RD6     |29     | LCD_D6
 *  RD7     |30     | LCD_D7
 * ---------|-------|-------------------------------
 *  RB0     |33     | Teclado Saida   L0
 *  RB1     |34     | Teclado Saida   L1
 *  RB2     |35     | Teclado Saida   L2
 *  RB3     |36     | Teclado Saida   L3
 *  RB4     |37     | Teclado Entrada C0
 *  RB5     |38     | Teclado Entrada C1
 *  RB6     |39     | Teclado Entrada C2
 *  RB7     |40     | Teclado Entrada C3
 * -------------------------------------------------
 *  RC0     |15     | Motor de Passo Saida   A+
 *  RC1     |16     | Motor de Passo Saida   B+
 *  RC2     |17     | Motor de Passo Saida   A-
 *  RC3     |18     | Motor de Passo Saida   B-
 * -------------------------------------------------
 */


#include "step_motor.h"
#include "config.h"
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"
#include <xc.h>

void main(void) 
{
    motor_init(32);
    
    while( 1 )
    {
        motor(360, 1, 100);
        motor(180, 0, 500);
        motor(360, 1, 100);
        motor(180, 0, 500); 
    }
    return;
}
