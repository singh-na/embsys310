/*******************************************************************************
File name       : swapCharsAsm.s
Description     : Assembly language function for swap
*******************************************************************************/   
    
    PUBLIC swapCharsAsm       // Exports symbols to other modules
                        // Making sqrAsm available to other modules.
    

    SECTION .text:CODE:REORDER:NOROOT(2)
    
    THUMB               // Indicates THUMB code is used
                        // Subsequent instructions are assembled as THUMB instructions
    
/*******************************************************************************
Function Name   : swapCharsAsm
*******************************************************************************/  
  
swapCharsAsm
    MOVS    R4, #5  //move value of 5 to R4 and update APSR flags
    MOVS    R5, #11 //move value of 11 to R5 and update APSR flags
    MOVS    R0, R4  //move value of R4 to R0 and update APSR flags
    MOVS    R1, R5  //move value of R5 to R1 and update APSR flags
    MOVS    R4, R1  //move value of R1 to R4 and update APSR flags
    MOVS    R5, R0  //move value of R0 to R5 and update APSR flags

    END
