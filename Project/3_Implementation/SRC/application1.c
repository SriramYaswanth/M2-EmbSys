/**
 * @file application1.c
 * @author Sriram Yaswanth (you@domain.com)
 * @brief  Seat heat generator and Monitering system
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "application1.h"

/**
 * @brief function for declaring peripherals led,button,heater.
 * 
 */
void peripheral_init(){
SET_LED_AS_OUTPUT;
 SET_BUTTON_AS_INPUT;
 SET_HEATER_AS_INPUT;
 PULL_UP_BUTTON;
 PULL_UP_HEATER ;


}