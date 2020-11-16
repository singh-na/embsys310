/*************************************************************************************
* File Name             : sysDefines.h
* Author                : Navdeep Singh
* Date Created          : 11/15/2020
* Project Descripton    : This project is focused to work on blinking LD1 on 
*                           B-L475E-IOT01A1 Evaluation board.
* File Description      : This file contains all the pre-processor defines for this 
*                           project, which may contain memory address, offsets, and 
*                           other system defines.
*************************************************************************************/

#ifndef SYS_DEFINES_H
#define SYS_DEFINES_H

#define RCC_BASE                0x40021000
#define RCC_ABH2ENR_OFFSET      0x4C
#define RCC_ABH2ENR_GPIOA_EN    0x01
#define RCC_ABH2ENR             *((unsigned int*)(RCC_BASE + RCC_ABH2ENR_OFFSET))

#define GPIOA_BASE              0x48000000

#define GPIOA_MODER_OFFSET      0x00
#define GPIOA_MODER_RESET       0xABFFFFFF
#define GPIOA_MODER_PIN5_BIT10  (1<<10)
#define GPIOA_MODER_PIN5_BIT11  (1<<11)
#define GPIOA_MODER             *((unsigned int*)GPIOA_BASE + GPIOA_MODER_OFFSET)

#define GPIOA_ODR_OFFSET        0x14
#define GPIOA_ORD_PIN5          (1<<5)
#define GPIOA_ORD               *((unsigned int*)(GPIOA_BASE + GPIOA_ODR_OFFSET))

#define DELAY   100000

#endif