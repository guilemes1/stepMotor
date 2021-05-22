/*
 * File:   step_motor.c
 * Author: 20185189
 *
 * Created on 20 de Maio de 2021, 14:54
 */

#include <xc.h>
#include "delay.h"

#define MOTOR PORTC

void motor_init(void)
{
    TRISC = 0x00;
    PORTC = 0x00;
}


void motor(int pulsos, int sentido)
{
    pulsos = pulsos / 4;
    int z;
    int n;
    
    if(sentido == 0)
    {   
        for(z = pulsos; z>0; z--)
        {                
            char i = 0x01;

            for(n=0; n<4; n++)
            {
                PORTC = i<<n;
                __delay_ms(100);
            }
        }    
    }   
        
    if(sentido == 1)    
    {   
        for(z = pulsos; z>0; z--)
        {
            char i = 0x08;

            for(n=0; n<4; n++)
            {
                PORTC = i>>n;
                __delay_ms(100);

            }
        }    
    }
}
