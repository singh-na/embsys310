/*************************************************************************************
* File Name             : stack.h
* Author                : Navdeep Singh
* Date Created          : 11/25/2020
* Project Descripton    : This project is focused to work on creating a software
*                           stack(Last In First Out) and supporitng APIs.
* File Description      : Stack APIs prototypes and defines will be created on this
*                           file.
*************************************************************************************/
#ifndef __STACK_H__
#define __STACK_H__

#define STACK_SIZE      0xA
#define STACK_FULL      STACK_SIZE
#define STACK_EMPTY     0x00

void stackInit(void);
void push(int data);
void pop(unsigned int noOfElements);
int isEmpty(void);
int isFull(void);

#endif