/*
 * button.c
 *
 *  Created on: Oct 30, 2023
 *      Author: DELL
 */


#include <button.h>

int KeyReg0 = NORMAL_STATE; // 1
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE; // 2
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

//int KeyRega = NORMAL_STATE; // 3
//int KeyRegb = NORMAL_STATE;
//int KeyRegc = NORMAL_STATE;
//int KeyRegd = NORMAL_STATE;

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;
int TimerForKeyPress = 200;

void subKeyProcess()
{
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}

void reset_button1_flag(){
	button1_flag =0;
}

void set_button1_flag(){
	button1_flag =1;
}

//void set_button3_flag(){
//	button3_flag =1;
//}

void set_button2_flag(){
	button2_flag =1;
}

//int isButton3Pressed(){
//	if(button3_flag ==1){
//		button3_flag =0;
//		return 1;
//	}
//	return 0;
//}

int isButton2Pressed(){
	if(button2_flag ==1){
		button2_flag =0;
		return 1;
	}
	return 0;
}

int isButton1Pressed(){
	if(button1_flag ==1){
		button1_flag =0;
		return 1;
	}
	return 0;
}

void Button1Press()
{
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
	if((KeyReg0 == KeyReg1) &&(KeyReg1 == KeyReg2)){
		if(KeyReg3 != KeyReg2){
			KeyReg3 = KeyReg2;
			if(KeyReg2 == PRESSED_STATE)
			{
				//TODO
				//subKeyProcess();
				set_button1_flag();
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				//TODO
				if(KeyReg2 == PRESSED_STATE)
				{
					//TODO
					//subKeyProcess();
					set_button1_flag();
					TimerForKeyPress = 200;
				}

			}

		}
	}
}

//void Button3Press(){
//	KeyRega = KeyRegb;
//	KeyRegb = KeyRegc;
//	KeyRegc = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
//	if((KeyRega == KeyRegb) &&(KeyRegb == KeyRegc)){
//		if(KeyRegd != KeyRegc){
//			KeyRegd = KeyRegc;
//			if(KeyRegc == PRESSED_STATE)
//			{
//				set_button3_flag();
//				TimerForKeyPress = 200;
//			}
//		}
//		else{
//			TimerForKeyPress--;
//			if(TimerForKeyPress == 0){
//				if(KeyRegc == PRESSED_STATE)
//				{
//					set_button3_flag();
//					TimerForKeyPress = 200;
//				}
//
//			}
//
//		}
//	}
//}

void set_duration_main()
{
	KeyReg4 = KeyReg5;
	KeyReg5 = KeyReg6;
	KeyReg6 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
	if((KeyReg4 == KeyReg5) &&(KeyReg5 == KeyReg6)){
		if(KeyReg7 != KeyReg6){
			KeyReg7 = KeyReg6;
			if(KeyReg6 == PRESSED_STATE)
			{
				//TODO
				set_button2_flag();
				MAN_duration ++;
				if(MAN_duration == 100) MAN_duration=0;	//reset if man_duaration ==100
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress == 0){
				//TODO
				if(KeyReg6 == PRESSED_STATE)
				{
					//TODO
					set_button2_flag();
					MAN_duration ++;
					if(MAN_duration == 100) MAN_duration=0;	//reset if man_duaration ==100
					TimerForKeyPress = 200;
				}

			}

		}
	}
}
