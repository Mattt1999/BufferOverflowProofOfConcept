	#include <stdio.h>
	#include <unistd.h>
	
	void win()
	{
		_exit(0);
	}
	
	
	int main()
	{	
		char buffer[10];
		
		gets(buffer);
		
		return 0;
	}