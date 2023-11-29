/*
 * fsm_manual.c
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */


#include"fsm_manual.h"

void fsm_manual_run(){
	switch(led_status){
	case RED_MAN:
		if (timer5_flag == 1){
				toggleRed();
				setTimer5(25);
		}
		if (isButtonPressed(1) == 1){
			timerRoad1++;
			if (timerRoad1++ >= 100) timerRoad1 = 2;
		}
		if (isButtonPressed(0) == 1){
			setTimer5(1);
			led_status = YELLOW_MAN;
			timerRoad1 = y_val;
			timerRoad2 = 3;
			resetButton();
		}
		if (isButtonPressed(2) == 1){
			r_val = timerRoad1;
		}
		break;

	case YELLOW_MAN:
		if (timer5_flag == 1){
				toggleYellow();
				setTimer5(25);
		}
		if (isButtonPressed(1) == 1){
			timerRoad1++;
			if (timerRoad1 >= r_val) timerRoad1 = 1;
		}
		if (isButtonPressed(0) == 1){
			setTimer5(1);
			led_status = GREEN_MAN;
			timerRoad1 = g_val;
			timerRoad2 = 4;
			resetButton();
		}
		if (isButtonPressed(2) == 1){
			y_val=timerRoad1;
		}
		break;

	case GREEN_MAN:
		if (timer5_flag == 1){
				toggleGreen();
				setTimer5(25);
		}
		if (isButtonPressed(1) == 1){
			timerRoad1++;
			if (timerRoad1 >= r_val) timerRoad1 = 1;
		}
		if (isButtonPressed(0) == 1){
			led_status = RED_GREEN;
			g_val = r_val-y_val;
			timerRoad1 = r_val;
			timerRoad2 = g_val;
			updateLedBuffer();
			setTimer1(g_val*100);
			setTimer2(100);
			setTimer4(1);
			index_led=0;
			clearSignal();
			resetButton();

		}
		if (isButtonPressed(2) == 1){
			g_val = timerRoad1;
			y_val = r_val-g_val;
		}
		break;
	default:
		break;
	}
}
