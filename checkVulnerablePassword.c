	#include <stdio.h>
	#include <string.h>
	
	void win()
	{
		printf("Success\n");
	}
	
	
	int main(int argc, char **argv)
	{
		
		int flag = 0;
		
		char buffer[10];
		gets(buffer);
		if(strcmp("abcd", buffer)==0)
		{
			flag = 1;
		}
		
		if(flag!=0)
		{
			win();
		}
		else
		{
			printf("try again\n");
		}
	}