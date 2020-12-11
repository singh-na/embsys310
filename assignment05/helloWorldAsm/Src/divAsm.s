/*******************************************************************************
File name       : divAsm.s
Description     : Assembly language function for division
*******************************************************************************/   

    EXTERN PrintString  // PrintString is defined outside this file.
    EXTERN myCstr       // myCstr defined outside this file.
    
    PUBLIC divAsm       // Exports symbols to other modules
                        // Making sqrAsm available to other modules.

    SECTION .text:CODE:REORDER:NOROOT(2)
    
    THUMB               // Indicates THUMB code is used
                        // Subsequent instructions are assembled as THUMB instructions
  
divAsm
    PUSH {R0,LR}        // save the input argument and return address
    LDR R0,=myCstr      // load (global) address of address of string into R0     
    LDR R0,[R0]         // load address of string into R0
    BL  PrintString     // call PrintString to print the string
    POP {R0,LR}         // Restore R0 and LR
    MOV R1, R0          // R1 = R0  , moves value of X to R1
    MOV R2, #0x2        // R2 = 2
    UDIV R0, R1, R2     // R0 = R1/R2
    BX LR               // return (with function result in R0)

    END
