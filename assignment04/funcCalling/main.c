/*************************************************************************************
* File Name             : main.c
* Author                : Navdeep Singh
* Date Created          : 11/15/2020
* Date Updated          : 11/22/2020
* Project Descripton    : This project is focused to work on blinking LD1 on 
*                           B-L475E-IOT01A1 Evaluation board using Bit-Banding.
*                           Create functions to observe Assembly code.
* File Description      : This is where the project begins the code execution. 
*                           This file will initialize and setup the pin to control
*                           LD1. Then, run a sequence of delays to blink LD1.
*************************************************************************************/
#include "sysDefines.h"

/* Function Prototypes */
int func1(int a, int b, int c, int d, int e);
int func2(void);

int main()
{
    int delay_counter;
    
    RCC_ABH2ENR_BB = RCC_ABH2ENR_GPIOA_EN;      //Enable GPIOA Clock using Bit-Banding
    
    //Set bit 10 and unset bit 11; to set LED1 pin to output mode
    GPIOA_MODER = (GPIOA_MODER_RESET | GPIOA_MODER_PIN5_BIT10) & (~GPIOA_MODER_PIN5_BIT11);
    
    while(1){
        delay_counter = 0;
        GPIOA_ORD ^= GPIOA_ORD_PIN5;        //Toggle LED 1 on B-L475E-IOT01A1 Eval. board
        
        while(delay_counter < DELAY){
            delay_counter++;
        }
        func2();
    }
}

int func1(int a, int b, int c, int d, int e){
    return a + b + c + d + e;
}

int func2(void){
    return func1(1,2,3,4,5);
}

