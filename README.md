# Stackoverflow-research
Code used to research simple stackoverflow based vulnerabilities on a Linux OS ran by an ARM Cortex-A5 processor (ATSAMA5D27). 
It includes a couple of vulnerable C programs and some assembly code, that represents the shellcode used to exploit the vulnerable programs. 
There are two variants of shell spwaning code (one with NULL bytes and one without) and one used to connect to a remote host. 
All are using ARM's Thumb instruction set to get rid of the NULL bytes.
