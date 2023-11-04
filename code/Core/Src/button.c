/*
 * button.c
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */


#include <button.h>

uint16_t mode[3]={SET_MODE_Pin,INC_Pin,SET_VAL_Pin};

int KeyReg0[NUM_BUTTON]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg1[NUM_BUTTON]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg2[NUM_BUTTON]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};
int KeyReg3[NUM_BUTTON]={NORMAL_STATE,NORMAL_STATE,NORMAL_STATE};

int TimeOutForKeyPress[NUM_BUTTON] =  {200,200,200};
int button_flag[NUM_BUTTON] = {0,0,0};

int isButtonPressed(int num){
	if(button_flag[num] == 1){
		button_flag[num] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int num){
	//TODO
	button_flag[num]=1;
}

void getKeyInput(){
	for (int i=0; i<NUM_BUTTON; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		//Add your button here
		KeyReg0[i] = HAL_GPIO_ReadPin(GPIOB, mode[i]);

		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])){ 
			if (KeyReg2[i] != KeyReg3[i]){ 
				KeyReg3[i] = KeyReg2[i];
				if (KeyReg3[i] == PRESSED_STATE){
					TimeOutForKeyPress[i] = 200;
					subKeyProcess(i);
				}
			}

			else{ 
				TimeOutForKeyPress[i]--;
				if (TimeOutForKeyPress[i] == 0){
					KeyReg3[i] = NORMAL_STATE;
				}

			}
		}
	}
}
