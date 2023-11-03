/*
 * global.h
 *
 *  Created on: Nov 3, 2023
 *      Author: DELL
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "display7SEG.h"
#include "button.h"
#include "led.h"

//fsm
#define INIT 0
#define RED_GREEN 1
#define RED_YELLOW 2
#define GREEN_RED 3
#define YELLOW_RED 4

#define RED_MAN 12
#define GREEN_MAN 13
#define YELLOW_MAN 14

extern int led_status;
extern int r_val;
extern int g_val;
extern int y_val;

extern int r_inc;
extern int g_inc;
extern int y_inc;

extern int toogleFlag;
//7seg
extern int led_buffer[4];
extern int index_led;
extern int timerRoad1;
extern int timerRoad2;

void updateLedBuffer();

#endif /* INC_GLOBAL_H_ */
