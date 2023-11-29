/*
 * global.c
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */

#include "global.h"

int led_status=0;

int led_buffer[4]={0,0,0,0};
int index_led = 0;

int r_val=5;
int y_val=2;
int g_val=3;

int timerRoad1=0;
int timerRoad2=0;

//int r_inc=0;
//int g_inc=0;
//int y_inc=0;

//int toogleFlag = 0;

void updateLedBuffer(){
	led_buffer[0] = timerRoad1 / 10;
	led_buffer[1] = timerRoad1 % 10;
	led_buffer[2] = timerRoad2 / 10;
	led_buffer[3] = timerRoad2 % 10;
}
