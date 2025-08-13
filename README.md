# Stack based bufferoverflow-research
Code used to research simple stackoverflow based vulnerabilities on a Linux OS ran by an ARM Cortex-A5 processor (ATSAMA5D27). 
It includes a couple of vulnerable C programs and some assembly code, that represents the shellcode used to exploit the vulnerable programs. 
There are two variants of shell spwaning code (one with NULL bytes and one without) and one used to connect to a remote host. 
All are using ARM's Thumb instruction set to get rid of the NULL bytes.

The "binsh.asm" files contain ARM assembly code used to spawn a new shell - the outcome is similar to executing system("/bin/sh");

The "checkVulnerablePassword.c" and the "programFlowRedirectioning" files contain code to showcase how to modifying the program execution flow can be done if the developer uses a vulnerable input function - "gets()". 

The "testExecuteShellcode.c" file contains code to showcase how shellcode can be executed from within a C program.

The "connectShellcode.c" and "connectShellcode.asm" contain code to spawn a reverse shell on a Linux system with an ARM processor. 
