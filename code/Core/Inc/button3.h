/*
 * button3.h
 *
 *  Created on: Oct 23, 2023
 *      Author: DELL
 */

#ifndef INC_BUTTON3_H_
#define INC_BUTTON3_H_

#include "global.h"

#define NORMAL_STATE 	GPIO_PIN_SET //-> 0 Nhan
#define PRESSED_STATE 	GPIO_PIN_RESET // -> Nhan


//function prototype
void KeyInputHandler3();
void LongKeyInputHandler3();
void getKeyInput3();

#endif /* INC_BUTTON3_H_ */
