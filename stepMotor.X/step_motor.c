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


void motor(int pulsos, int sentido)
{
    if(sentido == 0)
    {
        int z;
        
        for(z = pulsos; z>0; z--)
        {
            char i = 0x01;
            int n;

            for(n=0; n<4; n++)
            {
                PORTD = i<<n;
                __delay_ms(10);
            }
        }    
    }   
        
    if(sentido == 1)    
    {
        int z;
        
        for(z = pulsos; z>0; z--)
        {
            char i = 0x08;
            int n;

            for(n=0; n<4; n++)
            {
                PORTD = i>>n;
                __delay_ms(10);

            }
        }    
    }
}
