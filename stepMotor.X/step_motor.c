/*
 * File:   step_motor.c
 * Author: 20185189
 *
 * Created on 20 de Maio de 2021, 14:54
 */

#include <xc.h>
#include "delay.h"

#define MOTOR PORTC

int ppr;

void motor_init(int passos_motor)
{
    TRISC = 0x00;
    PORTC = 0x00;
    
    ppr = passos_motor;
}

char passointeiro[4] = {0x01, 0x08, 0x04, 0x02};


void motor(int graus, int sentido, int tempo)
{
    int passos;

    passos = ((graus * ppr)/360 / 4);
    
    int z;
    int n;
    
    if(sentido == 1)
    {   
        for(z = passos; z>0; z--)
        {             
            for(n=0; n<4; n++)
            {
                PORTC = passointeiro[n];
                delay(tempo);
            }
        }    
    }   
        
    if(sentido == 0)    
    {   
        for(z = passos; z>0; z--)
        {
            PORTC = passointeiro[3];
            
            for(n=3; n>=0; n--)
            {
                PORTC = passointeiro[n];
                delay(tempo);
            }
        }    
    }
}
