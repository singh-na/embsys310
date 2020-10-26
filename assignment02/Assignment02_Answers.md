#### Assignment 2 Answers
**1.a** The value of "counter" is -2147483648 <br/>
**1.b** 0x80000000 <br/>
**1.c** N and V flags are set to 1. N flag is set because MSB of "counter" (bit 31) is set high. Since this is a signed variable, MSB is preserved to determine signage. The Arithmetic Logic Unit (ALU) uses MSB to determine the signage of the variable. When "counter" is incremented from its maximum value (0x7FFFFFFF), the result has MSB=1. Whenever two values are added, and both of the values have MSB=0 and the resulting value has MSB=1 causes overflow. <br/>

**2.a** The value of "counter" is 0. <br/>
**2.b** N and V flags are set low. The MSB of "counter" is set low causing the N flag to set low. V flag is not set because the two values to be added do not have same value for their MSB (one has MSB=0 and another MSB=1). This does not cause an overflow. <br/>

**3.a** 2147483648  <br/>
**3.b** N and V flags are set to 1. N flag is set because MSB is set for the variable. Since "counter" is an unsigned variable, N flags do not hold any significance. V flag is set because the two values to be added have same value for MSB=0, the result produces MSB=1, this causes an overflow.

**4.a** The value of "counter" is 0 <br/>
**4.b** N and V flags are set low. N flag is not set because MSB=0 for the variable. Since, the MSB of values being added do not match, the N flag will not be set. <br/>

**5.a** Variable "counter" is a global variable. <br/>
**5.b** No, "counter" is not visible in "Locals" view. <br/>
**5.c** We can track "counter" under "watch" view and also under "memory" view by knowing the memory address from "watch" view. <br/>
**5.d** 0x20000000 <br/>

Change the source code to the following, then run the program in the simulator:
a) What is the value of “counter” at the end of the program (halting at the return 0 statement)
b) Explain why the counter value has changed?

**6.a** Value of "counter" is 4. <br/>
**6.b** <br/>

**6.b** <br/>