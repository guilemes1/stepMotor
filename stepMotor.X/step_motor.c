/*
 * File:   step_motor.c
 * Author: 20185189
 *
 * Created on 20 de Maio de 2021, 14:54
 */

#include <xc.h>
#include "delay.h"

#define MOTOR PORTD

void motor_init(void)
{
    TRISD = 0x00;
    PORTD = 0x00;
}


void motor(void)
{
    PORTD = 0x08;
    __delay_ms(10);
    
    PORTD = 0x04;   
    __delay_ms(10);
    
    PORTD = 0x02;
    __delay_ms(10);
   
    PORTD = 0x01;
    __delay_ms(10);       
}
