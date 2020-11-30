/*************************************************************************************
* File Name             : main.c
* Author                : Navdeep Singh
* Date Created          : 11/25/2020
* Project Descripton    : This project is focused to work on creating a software
*                           stack(Last In First Out) and supporitng APIs.
* File Description      : This is where the project begins the code execution. 
*                           This file will run the main code and call functions
*                           as needed for stack to function properly.
*************************************************************************************/
#include <assert.h>
#include "stack.h"

int main(void)
{
    int testInt;
    int result1;
    int result2;
    int i;
    
    stackInit();
    
    // *************************************************************************
    // Test1: Initially Check if the stack is empty
    // *************************************************************************
    // Arrange:
    
    // Act:
    result1 = isEmpty();
    result2 = isFull();
      
    // Assert:
    assert(1 == result1);
    assert(0 == result2);
    
    // *************************************************************************
    // Test2: Fill the stack fully to check for stack full flag
    //        reduce "for" loop to fail test
    // *************************************************************************
    // Arrange:
    testInt = 20;
        
    // Act:
    for(i=0;i<STACK_SIZE-1;i++){
        push(testInt);
        result1 = isFull();
    }
      
    // Assert:
    assert(1 == result1);
    
    
    // *************************************************************************
    // Test3: Pop the stack maximum times to check for stack empty flag
    // *************************************************************************
    // Arrange:
    testInt = 20;
        
    // Act:
    pop(STACK_SIZE);
    result1 = isEmpty();
      
    // Assert:
    assert(1 == result1);
    
    return 0;
}
