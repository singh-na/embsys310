## Assignment 4 Answers
### 1.a Assembly for writing to RCC_AHB2ENR - Bit Banding
//Enable GPIO port A clock <br/>
**MOVS R0 , #1** //Move value of 1 to R0,<br/>
**LDR.N R1 , [PC,#0x28]** //Take the value of PC, offset 0x28 plus 0x4, gives you the address. Load (Narrow instruction) the value at this address to R1<br/>
**STR R0 , [R1]** //store the values of R0 into the address of R1 value
<br/><br/>
//Set bit 10 and unset bit 11; to set LED 1 pin to output mode<br/>
**LDR.N R0 , [PC,#0x28]** //Value of PC, add 0x28, add 0x4, gives us the address. Load (Narrow instruction) the value of this address to R0 <br/>
**MOVS.W R1 , #1207959552** //Move(Wide instruction) the value of 1207959552 to R1<br/>
**STR R0 , [R1]** //store value of R0 to address of R1
<br/>

### 1.b Assembly Instruction without Bit-Banding
**MOVS R0 , #1** //Moves value of 1 to R0<br/>
**LDR.N R1 , [PC , #0x28]** //Loads (narrow instruction) value of address in PC with an offset of 0x28 plus 4.<br/>
**STR R0 , [R1]** ///store value of R0 to address of R1
<br/><br/>
### 2.a
Initially when calling the "func2" in main function, the compiler Branch with Link (BL) to call "func2" and updates the Link Register (LR) with the address that will come after finishing up with "func2". When getting to "func2" the compiler pushes the LR and R7 to stack and decrements SP. The compiler recognizes that the function that is about to be executed has multiple arguments and also realizes that it may have to store some of these values to stack for later use. The compiler moves the values of called function to registers R0-R3 and one of the values to SP in order to reuse one of the scratch registers.

Next, "func2" uses Branch with Link (BL) instruction to call "func1" and update the Link Register (LR) with the address that will come after the "func1" is finished causing a branch to "label" resulting PC register to be updated with the address to next instruction. The LR address gives the processor a point of return to continue the program after finishing "func1".

Now "func1" needs to get the values that are stored on stack and scratch registers R0-R3. Compiler pushes R4 to stack, then loads R4 with the value of stack address with an offset of 0x4.
### 2.b
Before calling "func1" the compiler pushed R7 and LR to stack for later use in the code. Then, the compiler moved the "func1" arguments to scratch registers. Fifth argument of the "func1" is pushed to R0 and then to stack. Then the remaining arguments are pushed to R0-R3. Finally, branching to "func1" in memory.
### 2.c
Inside "func1" the compiler pusshed R4 to stack, in order to use R4 later in code. Also, loaded R4 with the value of stack address with an offset of 0x4. Then, the compiler pushes the R4-R6 values to stack in order to preserve their value for later use. Then, moved the value of R0 to R4, then loaded R5 with the value of SP address with an offset of 0xC.
### 2.d
I am not sure why the compiler didn't use R12 register as part of the addition of 5 arguments.
### 3.a
I focused this code to use less flash memory and also focused on using pointers. Not sure if push() and pop() functions are supposed to have a return variable but I assumed that they can not have a return value which would have made testing a bit easier and broad.<br> Alternatively, I could have created a global integer array along with a global integer variable to track the position of stack.
### 3.b
- Initially, test to make sure the stack is empty before pushing anything on the stack.
- Push elements to fill the stack completely and make sure the stack full flag is returned correctly.
- Pop elements to empty the stack completely and make sure the stack empty flag is returned correctly.