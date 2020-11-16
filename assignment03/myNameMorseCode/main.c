/*************************************************************************************
* File Name             : main.c
* Author                : Navdeep Singh
* Date Created          : 11/15/2020
* Project Descripton    : This project is focused to work on blinking LD1 on 
*                           B-L475E-IOT01A1 Evaluation board. The purpose of this 
*                           project is to use LD1 to represent my name in Morse Code.
* File Description      : This is where the project begins the code execution. 
*                           This file will initialize and setup the pin to control 
*                           LD1. Then, run a sequence of delays to represent my name
*                           in International Morse Code.
*************************************************************************************/
#include "sysDefines.h"

const int g_MyNameMorseCode[] = { FIRST_NAME , SP_WORD , LAST_NAME };

int main()
{
    int morse_delay = 0;
    int delay_counter = 0;
    int morse_code_arr_size = sizeof(g_MyNameMorseCode)/sizeof(g_MyNameMorseCode[0]);
    
    RCC_ABH2ENR |= RCC_ABH2ENR_GPIOA_EN;        //Enable GPIOA Clock
    
    //Set bit 10 and unset bit 11; to set LED1 pin to output mode
    GPIOA_MODER = (GPIOA_MODER_RESET | GPIOA_MODER_PIN5_BIT10); 
    GPIOA_MODER &= ~GPIOA_MODER_PIN5_BIT11;
    
    while(morse_delay < morse_code_arr_size){
        delay_counter = 0;
        GPIOA_ORD ^= GPIOA_ORD_PIN5;        //Toggle LED 1 on B-L475E-IOT01A1 Eval. board
        
        while(delay_counter < g_MyNameMorseCode[morse_delay]){
            delay_counter++;
        }
        
        morse_delay++;  //increment the array
    }
    
    GPIOA_ORD &= ~GPIOA_ORD_PIN5;       //turn off LED 1
    
    return 0;
}
