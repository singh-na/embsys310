/*************************************************************************************
* File Name             : main.c
* Author                : Navdeep Singh
* Date Created          : 12/10/2020
* Project Descripton    : This project is focused to create a swap function using
*                           pointer address swap.
* File Description      : This is where the project begins the code execution. 
*                           This file will have the swap function called
*                           in main function.
*************************************************************************************/
#include <assert.h>

void swap_pointer(int** xPtr, int** yPtr);

int main(void)
{
    /*I guess these variable can be static to preserve their value. But we are 
    *  only calling a function that's using pointers and have no risk of writing
    *  to stack. This could be risky if we add another function that may
    *  overwrite the values in stack.      */
    int x = 0xDEAD;
    int y = 0xBEEF;
    int* xPtr = &x;
    int* yPtr = &y;
    
    swap_pointer(&xPtr,&yPtr);
    
    assert(x == 0xDEAD);
    assert(y == 0xBEEF);
    assert(*xPtr == 0xBEEF);
    assert(*yPtr == 0xDEAD);
    
    return 0;
}

//swap function to change address of pointers
void swap_pointer(int** x, int** y){
    int* tempPtr = *x;
    *x = *y;
    *y = tempPtr;

}