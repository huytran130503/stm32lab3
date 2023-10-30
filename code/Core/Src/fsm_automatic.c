/*
 * fsm_automatic.c
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */

#include "fsm_automatic.h"

void fsm_automatic_run(){
	 switch (status){
	 case INIT:
		 clear();

		 status = AUTO_RED;
		 set_Timer1((int)(red_duration*100));
		 set_Timer2((int)(green_duration*100));
		 set_green_follow();

		 break;
	 case AUTO_RED:
		 set_red();
		 if(timer2_flag ==1)
		 {
			 set_yellow_follow();
			 set_Timer2((int)(yellow_duration*100));
		 }
		 if(timer1_flag ==1)
		 {
			 status = AUTO_GREEN;
			 set_Timer1((int)(green_duration*100));
			 reset_counter();				//for counting down time
			 reset_counter_follow();
		 }
		 if(isButton1Pressed()==1)
		 {
			 MAN_duration =0;
			 status = MAN_INIT;
			 set_Timer1(1000);
		 }
		 break;
	 case AUTO_GREEN:
		 set_green();
		 set_red_follow();
		 if(timer1_flag ==1)
		 {

			 status = AUTO_YELLOW;
			 set_Timer1((int)(yellow_duration*100));
			 reset_counter();				//counting
		 }
		 if(isButton1Pressed()==1)
		 {
			 MAN_duration =0;
			 status = MAN_INIT;
			 set_Timer1(1000);
		 }

		 break;
	 case AUTO_YELLOW:
		 set_yellow();
		 set_red_follow();
		 if(timer1_flag ==1)
		 {
			 status = AUTO_RED;
			 set_Timer1((int)(red_duration*100));
			 set_Timer2((int)(green_duration*100));
			 set_green_follow();
			 reset_counter();				//counting
		 }
		 if(isButton1Pressed()==1)
		 {
			 MAN_duration =0;
			 status = MAN_INIT;
			 set_Timer1(1000);
		 }
		 break;
	 default:
		 break;
	 }
}
void reset_counter(){
	red_counter = red_duration;
	green_counter=green_duration;
	yellow_counter=yellow_duration;
}
void reset_counter_follow(){
	red_counter_1 = red_duration;
	green_counter_1=green_duration;
	yellow_counter_1=yellow_duration;
}
void traffic_7Segment_led(){
	switch(status){
	case INIT:
		timer3_flag=1;			//7segment
		reset_counter();
		break;
	case AUTO_RED:
		if(timer3_flag==1 && led ==0){
			set_7Segment_1(led, red_counter/10);
			led = 1;
			set_Timer3(50);
		}
		else if(timer3_flag==1 && led ==1){
			set_7Segment_1(led, (int)red_counter%10);
			red_counter--;
			led =0;
			set_Timer3(50);
		}

		break;
	case AUTO_GREEN:
		if(timer3_flag==1 && led ==0){
			set_7Segment_1(led, green_counter/10);
			led = 1;
			set_Timer3(50);
		}
		else if(timer3_flag==1 && led ==1){
			set_7Segment_1(led, (int)green_counter%10);
			green_counter--;
			led = 0;
			set_Timer3(50);
		}

		break;
	case AUTO_YELLOW:
		if(timer3_flag==1 && led ==0){
			set_7Segment_1(led, yellow_counter/10);
			led = 1;
			set_Timer3(50);
		}
		else if(timer3_flag==1 && led ==1){
			set_7Segment_1(led, (int)yellow_counter%10);
			yellow_counter--;
			led = 0;
			set_Timer3(50);
		}

		break;
	default:
		break;
	}
}
void traffic_7Segment_led1(){
	switch(status){
		case INIT:
			timer4_flag=1;			//timer for led 7 segment admin
			reset_counter_follow();
			break;
		case AUTO_RED:
			if(green_counter_1<0){
				if(timer4_flag==1 && led1 ==0){		//yellow follow led
					set_7Segment_2(led1, yellow_counter_1/10);
					led1 = 1;
					set_Timer4(50);
				}
				else if(timer4_flag==1 && led1 ==1){
					set_7Segment_2(led1, (int)yellow_counter_1%10);
					yellow_counter_1--;
					led1 =0;
					set_Timer4(50);
				}
			}
			else if(timer4_flag==1 && led1 ==0){		//green follow led
				set_7Segment_2(led1, green_counter_1/10);
				led1 = 1;
				set_Timer4(50);
			}
			else if(timer4_flag==1 && led1 ==1){
				set_7Segment_2(led1, (int)green_counter_1%10);
				green_counter_1--;
				led1 =0;
				set_Timer4(50);
			}
			break;
		case AUTO_GREEN:
			if(timer4_flag==1 && led1 ==0){
				set_7Segment_2(led1, red_counter_1/10);
				led1 = 1;
				set_Timer4(50);
			}
			else if(timer4_flag==1 && led1 ==1){
				set_7Segment_2(led1, (int)red_counter_1%10);
				red_counter_1--;
				led1 = 0;
				set_Timer4(50);
			}
			break;
		case AUTO_YELLOW:
			if(timer4_flag==1 && led1 ==0){
				set_7Segment_2(led1, red_counter_1/10);
				led1 = 1;
				set_Timer4(50);
			}
			else if(timer4_flag==1 && led1 ==1){
				set_7Segment_2(led1, (int)red_counter_1%10);
				red_counter_1--;
				led1 = 0;
				set_Timer4(50);
			}
			break;
		default:
			break;
	}
}

