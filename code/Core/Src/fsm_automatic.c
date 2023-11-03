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
		//TODO
		offALL();

		led_status = RED_GREEN;
		setTimer1(g_val*100);
		setTimer2(100);
		break;
	case RED_GREEN:
		//TODO
		onRED1();
		onGREEN2();

		//decrease
		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = y_val;
		}

		//update state
		if (timer1_flag == 1){
			setTimer1(y_val*100);
			led_status = RED_YELLOW;
		}
		break;
	case RED_YELLOW:
		//TODO
		onRED1();
		onYELLOW2();

		//decrease
		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = g_val;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = r_val;
		}

		//update state
		if(timer1_flag == 1){
			setTimer1(g_val*100);
			led_status = GREEN_RED;
		}
		break;
	case GREEN_RED:
		onGREEN1();
		onRED2();

		//decrease
		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = y_val;
			timerRoad2--;
		}

		//update state
		if(timer1_flag == 1){
			setTimer1(y_val*100);
			led_status = YELLOW_RED;
		}
		break;
	case YELLOW_RED:
		onYELLOW1();
		onRED2();

		//decrease
		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = r_val;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = g_val;
		}

		//update state
		if (timer1_flag == 1){
			setTimer1(g_val*100);
			led_status = RED_GREEN;
		}
		break;
	default:
		break;
	}
	//check mode
	if (isButtonPressed(0) == 1 && (led_status == RED_GREEN || led_status == RED_YELLOW || led_status == GREEN_RED || led_status == YELLOW_RED)){
		offALL();
		led_status = RED_MAN;
		r_inc = r_val;
		y_inc = y_val;
		g_inc = g_val;
		setTimer5(1); // blinking led

		timerRoad1 = r_val;
		timerRoad2 = 2;
	}
}
