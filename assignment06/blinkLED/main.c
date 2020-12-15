#include "stm32l475xx.h"
#include "system_stm32l4xx.h"

#define DELAY   100000

int main()
{
    volatile int delay_counter = 0;
    
    //RCC_ABH2ENR |= RCC_ABH2ENR_GPIOA_EN;        //Enable GPIOA Clock
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;
    
    //Set bit 10 and unset bit 11; to set LED1 pin to output mode
    //GPIOA_MODER = (GPIOA_MODER_RESET | GPIOA_MODER_PIN5_BIT10);
    GPIOA->MODER |= ~GPIO_MODER_MODE5_0;
    
    //GPIOA_MODER &= ~GPIOA_MODER_PIN5_BIT11;
    GPIOA->MODER &= ~GPIO_MODER_MODE5_1;
 
    while(1){
        delay_counter = 0;
        //GPIOA_ORD ^= GPIOA_ORD_PIN5;        //Toggle LED 1 on B-L475E-IOT01A1 Eval. board
        GPIOA->ODR ^= GPIO_ODR_OD5;
        
        while(delay_counter < DELAY){
            delay_counter++;
        }
    }
}
