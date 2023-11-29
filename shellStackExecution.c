#include <stdio.h>
#include <string.h>

void get_message(char *arg)
{
	char buffer[60];
	
	printf("Address of buffer %p\n", &buffer[0]);
	
	strcpy(buffer,arg);
}

int main(int argc, char *argv[])
{
	
	printf("Start\n");
	
	get_message(argv[1]);
	
	return 0;
}