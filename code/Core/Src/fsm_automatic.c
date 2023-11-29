/*
 * fsm_automatic.c
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */

#include "fsm_automatic.h"


void fsm_automatic(){
	switch(led_status){
	case INIT:
		offALL();

		led_status = RED_GREEN;
		setTimer1(g_val*100);
		setTimer2(100);
		break;
	case RED_GREEN:
		onRED1();
		onGREEN2();

		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = y_val;
		}

		if (timer1_flag == 1){
			setTimer1(y_val*100);
			led_status = RED_YELLOW;
		}
		if (isButtonPressed(0) == 1 ){
			offALL();
			led_status = RED_MAN;
			setTimer5(1);

			timerRoad1 = r_val;
			timerRoad2 = 2;

			resetButton();
		}
		break;
	case RED_YELLOW:
		onRED1();
		onYELLOW2();

		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = g_val;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = r_val;
		}

		if(timer1_flag == 1){
			setTimer1(g_val*100);
			led_status = GREEN_RED;
		}
		if (isButtonPressed(0) == 1 ){
			offALL();
			led_status = RED_MAN;
			setTimer5(1);

			timerRoad1 = r_val;
			timerRoad2 = 2;

			resetButton();
		}
		break;
	case GREEN_RED:
		onGREEN1();
		onRED2();

		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = y_val;
			timerRoad2--;
		}

		if(timer1_flag == 1){
			setTimer1(y_val*100);
			led_status = YELLOW_RED;
		}
		if (isButtonPressed(0) == 1 ){
			offALL();
			led_status = RED_MAN;
			setTimer5(1);

			timerRoad1 = r_val;
			timerRoad2 = 2;

			resetButton();
		}
		break;
	case YELLOW_RED:
		onYELLOW1();
		onRED2();

		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = r_val;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = g_val;
		}

		if (timer1_flag == 1){
			setTimer1(g_val*100);
			led_status = RED_GREEN;
		}
		if (isButtonPressed(0) == 1 ){
			offALL();
			led_status = RED_MAN;
			setTimer5(1);

			timerRoad1 = r_val;
			timerRoad2 = 2;

			resetButton();
		}
		break;
	default:
		break;
	}
}
