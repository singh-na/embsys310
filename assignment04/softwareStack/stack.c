/*************************************************************************************
* File Name             : stack.c
* Author                : Navdeep Singh
* Date Created          : 11/25/2020
* Project Descripton    : This project is focused to work on creating a software
*                           stack(Last In First Out) and supporitng APIs.
* File Description      : Stack APIs source code will be written on this file.
*************************************************************************************/
#include "stack.h"

//int stackPtr = STACK_SIZE;
int *g_pStack;
int g_stackTop = 0;


void stackInit(void)
{
    volatile int stack[STACK_SIZE] = { 0 };
    g_pStack = (int *)&stack[STACK_SIZE];   //point to the address of last element of stack array
}

void push(int data)
{
    //check to see if stack is full, in order to avoid overwriting unintended adress location
    if(!isFull()){
        g_pStack--;         //decrement the stack address by sizeof(int)
        *g_pStack = data;   //push data to current address of stack pointer
        g_stackTop++;
    }else{}
}

void pop(unsigned int noOfElements)
{
    int i;
    for(i=0;i<noOfElements;i++){
        if(!isEmpty()){
            *g_pStack = '\0';
            g_pStack++;
            g_stackTop--;
        }else{
            break;
        }
    }
}

int isEmpty(void)
{
    if(g_stackTop == STACK_EMPTY){
        return 1;
    }else{
        return 0;
    }
}

int isFull(void)
{
    if(g_stackTop == STACK_FULL){
        return 1;
    }else{
        return 0;
    }
}