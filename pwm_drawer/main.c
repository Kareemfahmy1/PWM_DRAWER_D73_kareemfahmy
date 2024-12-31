/*
 * pwm_drawer.c
 *
 * Created:12/10/2024 3:22:08 PM
 *  Author: KAREEM FAHMY
 */ 

#define F_CPU 16000000UL
#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_Math.h"
#include "DIO_interface.h"
#include "DIO_register.h"

int main(void)

{
	/* you can use duty from next
	100 90 80 75 70 60 50 40 30 25 20 10 0
	and any frequency  */
	
	
	
	
	PWM_DRAWER_voidStart();
    PWM_DRAWER_voidDISPLAY(50,75);
    while (1) 
    {
    }
}

