/**
 * @file application2.c
 * @author Sriram Yaswanth(you@domain.com)
 * @brief Seat heat generator and Monitering system
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <avr/io.h>
#include "acpplication2.h"

/**
 * @brief A function to initialise the analog to digital converter
 * 
 */
void ADC_Init()
{
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(7<<ADPS0);

}

/**
 * @brief A funciton to receive temperature sensor
 * 

 */
uint16_t Read_ADC_Value(uint8_t ch)
{
    ADMUX&=0xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);

    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);

}           /* Activity_2 */

