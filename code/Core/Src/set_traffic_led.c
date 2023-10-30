/*
 * set_traffic_led.c
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */


#include "set_traffic_led.h"

void set_7Segment_2(int led,int duration)
{
	if(led ==0){
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
	}
	if(led ==1){
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
	}
	switch(duration){
		case 0:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 0);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 1);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 1);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 1);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 0);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 1);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 1);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 1);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 1);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 0);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 1);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 0);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
			break;
		default:
			break;
	}
}
void set_7Segment_1(int led,int duration)
{
	if(led ==0){
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
	}
	if(led ==1){
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
	}
	switch(duration){
		case 0:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 0);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 1);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 1);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 1);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 0);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 1);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 1);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 1);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 1);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 0);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 1);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 0);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
			break;
		case 9:
			HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
			HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
			HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
			HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
			HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
			HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
			HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
			break;
		default:
			break;
	}
}
void set_red()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 1);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
}
void set_green()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 1);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
}
void set_yellow()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 1);
}
void set_red_follow()
{
	 HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 1);
	 HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 0);
}
void set_green_follow()
{
	 HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 1);
	 HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 0);
}
void set_yellow_follow()
{
	 HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 1);
}
void set_autoAjust_red(int duration)
{
	yellow_duration = (float)duration/5*2;
	green_duration = (float)duration/5*3;
	red_duration = (float)duration;
}
void set_autoAjust_yellow(int duration)
{
	red_duration =  (float)duration/2*5;
	green_duration =(float)duration/2*3;
	yellow_duration = (float)duration;
}
void set_autoAjust_green(int duration)
{
	red_duration = (float)duration/3*5;
	yellow_duration = (float)duration/3*2;
	green_duration = (float)duration;
}

void clear()
{
	 HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
}
void clear_follow()
{
	 HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, 0);
	 HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port, LED_GREEN1_Pin, 0);
	 HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port, LED_YELLOW1_Pin, 0);
}

void set_7segled_mode(int mode)
{
	switch(mode){
	case 1:
		clear();
		clear_follow();
		if(timer5_flag==1 && led==0){
			set_7Segment_1(led, 0);
			led=1;
			set_Timer5(50);
		}
		else if(timer5_flag==1 && led==1){
			set_7Segment_1(led, 1);
			led=0;
			set_Timer5(50);
		}

		break;
	case 2:
		if(timer5_flag==1 && led==0){
			set_7Segment_1(led, 0);
			set_red();
			clear_follow();
			led=1;
			set_Timer5(50);
		}
		else if(timer5_flag==1 && led==1){
			set_7Segment_1(led, 2);
			set_red_follow();
			clear();
			led=0;
			set_Timer5(50);
		}
		break;
	case 3:
		if(timer5_flag==1 && led==0){
			set_7Segment_1(led, 0);
			set_yellow();
			clear_follow();
			led=1;
			set_Timer5(50);
		}
		else if(timer5_flag==1 && led==1){
			set_7Segment_1(led, 3);
			set_yellow_follow();
			clear();
			led=0;
			set_Timer5(50);
		}
		break;
	case 4:
		if(timer5_flag==1 && led==0){
			set_7Segment_1(led, 0);
			set_green();
			clear_follow();
			led=1;
			set_Timer5(50);
		}
		else if(timer5_flag==1 && led==1){
			set_7Segment_1(led, 4);
			set_green_follow();
			clear();
			led=0;
			set_Timer5(50);
		}
		break;
	default:
		break;
	}
}
void set_7segled_duration(int duration){
	if(timer6_flag==1 && led1==0){
		set_7Segment_2(led1, duration/10);
		led1 = 1;
		set_Timer6(50);
	}
	else if(timer6_flag==1 && led1==1){
		set_7Segment_2(led1, duration%10);
		led1 = 0;
		set_Timer6(50);
	}
}
