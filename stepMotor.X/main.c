/*
 * File:   main.c
 * Author: 20185189
 *
 * Created on 20 de Maio de 2021, 14:03
 */

#include "step_motor.h"
#include "config.h"
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"
#include <xc.h>

void main(void) 
{
    motor_init();
    
    while( 1 )
    {
        motor(32, 1);
        motor(32, 0);
        motor(32, 1);
        motor(32, 0); 
    }
    return;
}
