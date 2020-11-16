/*************************************************************************************
* File Name             : sysDefines.h
* Author                : Navdeep Singh
* Date Created          : 11/15/2020
* Project Descripton    : This project is focused to work on blinking LD1 on 
*                           B-L475E-IOT01A1 Evaluation board. The purpose of this 
*                           project is to use LD1 to represent my name in Morse Code.
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

//Morse Code Defines for time delay
#define DOT     100000
#define DASH    (DOT * 3)            
#define SP      (DOT)           //time between each dot and dash
#define SP_LTR  (DOT * 3)
#define SP_WORD (DOT * 7)

//Morse Code of first and last name
#define FIRST_NAME   N , SP_LTR , A , SP_LTR , V , SP_LTR , D , SP_LTR , E , SP_LTR , E , SP_LTR , P
#define LAST_NAME    S , SP_LTR , I , SP_LTR , N , SP_LTR , G , SP_LTR , H

//Morse Code of Letters
#define A       DOT , SP , DASH
#define B       DASH , SP , DOT , SP , DOT , SP , DOT
#define C       DASH , SP , DOT , SP , DASH , SP , DOT
#define D       DASH , SP , DOT , SP , DOT
#define E       DOT
#define F       DOT , SP , DOT , SP , DASH , SP , DOT
#define G       DASH , SP , DASH , SP , DOT
#define H       DOT , SP , DOT , SP , DOT , SP , DOT
#define I       DOT , SP , DOT
#define J       DOT , SP , DASH , SP , DASH , SP , DASH
#define K       DASH , SP , DOT , SP , DASH
#define L       DOT , SP , DASH , SP , DOT , SP , DOT
#define M       DASH , SP , DASH
#define N       DASH , SP , DOT
#define O       DASH , SP , DASH , SP , DASH
#define P       DOT , SP , DASH , SP , DASH , SP , DOT
#define Q       DASH , SP , DASH , SP , DOT , SP , DASH
#define R       DOT , SP , DASH , SP , DOT
#define S       DOT , SP , DOT , SP , DOT
#define T       DASH
#define U       DOT , SP , DOT , SP , DASH
#define V       DOT , SP , DOT , SP , DOT , SP , DASH
#define W       DOT , SP , DASH , SP , DASH
#define X       DASH , SP , DOT , SP , DOT , SP , DASH
#define Y       DASH , SP , DOT , SP , DASH , SP , DASH
#define Z       DASH , SP , DASH , SP , DOT , SP , DOT

#endif