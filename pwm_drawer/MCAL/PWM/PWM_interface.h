/*
 * PWM_interface.h
 *
 * Created:12/26/2024 3:22:08 PM
 *  Author: KAREEM FAHMY
 */ 


#ifndef PWM_INTERFACE_H_
#define PWM_INTERFACE_H_


void PWM_voidInitChannel_0          (void);
void PWM_voidGenerate_PWM_Channel_0 (u8 copy_u8DutyCycle);
void PWM_voidInitChannel_1A         (void);
void PWM_voidGenerate_PWM_Channel_1A(u16 copy_u16Frequency_hz, f32 copy_f32DutyCycle);


#endif /* PWM_INTERFACE_H_ */