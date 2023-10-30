/*
 * set_traffic_led.h
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */

#ifndef INC_SET_TRAFFIC_LED_H_
#define INC_SET_TRAFFIC_LED_H_

#include "global.h"

void set_red();
void set_green();
void set_yellow();
void set_red_follow();
void set_green_follow();
void set_yellow_follow();
void set_7Segment_1(int,int);
void set_7Segment_2(int,int);
void set_7segled_mode(int );
void set_7segled_duration(int);
void clear();
void clear_follow();
void set_autoAjust_red(int );
void set_autoAjust_yellow(int );
void set_autoAjust_green(int );

#endif /* INC_SET_TRAFFIC_LED_H_ */
