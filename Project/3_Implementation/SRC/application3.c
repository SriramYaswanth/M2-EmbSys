/**
 * @file application3.c
 * @author Sriram Yaswanth (you@domain.com)
 * @brief   Seat heat generator and Monitering system
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "application3.h"

void TimerWaveGenerationMode(void){

    SET_TIMER1A_FAST_PWM; 
    PRESCALE_TIMER_64; 
    SET_PWM_AS_OUTPUT; 

}
int outputfromPWM(uint16_t ADC_val)
{if(ADC_val<=209){

        OCR1A = 205; 
        _delay_ms(20);
        return 1;
    }
    /**
     * @brief duty cycle 20%
     * 
     */
    else if((ADC_val>=210) && (ADC_val<=509)){

        OCR1A = 410; 
        
        _delay_ms(20);
        return 2;
        /**
         * @brief duty cycle 40%
         * 
         */
    }
    else if((ADC_val>=510) && (ADC_val<=709)){

        OCR1A = 617;
          
        _delay_ms(20);

        return 3;
        /**
         * @brief duty cycle 60%
         * 
         */
    }
    else{

        OCR1A = 923; 
        
        _delay_ms(20);

        return 4;
        /**
         * @brief duty cycle 90%
         * 
         */
}
}