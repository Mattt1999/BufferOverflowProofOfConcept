#include <stdio.h>

void secret_message();

void get_message();

int main()
{
	printf("type something\n");
	
	get_message();
	printf("back to main\n");
	
	return 0;
}

void get_message()
{
	
	char buffer[10];
	
	gets(buffer);
	
	printf("mesajul este: %s\n", buffer);
}

void secret_message()
{
	printf("Success\n");
}