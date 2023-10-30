/*
 * button.h
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"


#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int set_duration_RED 	;
extern int set_duration_YELLOW ;
extern int set_duration_GREEN	;

void set_button1_flag();
void set_button2_flag();
void reset_button1_flag();
void Button1Press();
void set_duration_main();
int isButton1Pressed();
int isButton2Pressed();

#endif /* INC_BUTTON_H_ */
