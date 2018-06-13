/* This page contains a client program that can request a file from the server program
 * on the next page. The server responds by sending the whole file.
 */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SERVER_PORT 12345 /* arbitrary, but client & server must agree */
#define BUF_SIZE 4096     /* block transfer size */
int main(int argc, char **argv)
{
	int c, s, bytes;
	char buf[BUF_SIZE];           /* buffer for incoming file */
	struct hostent *h;            /* info about server */
	struct sockaddr_in channel;   /* holds IP address */
	
	if (argc != 3) fatal("Usage: client server-name file-name");
	
	h = gethostbyname(argv[1]);	/*lookup host ip address*/
	if (!h) 
		fatal("gethostbyname failed");
	
	s = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (s <0) 
		fatal("socket");
	memset(&channel, 0, sizeof(channel));
	
	channel.sin_family= AF_INET;
	memcpy(&channel.sin_addr.s_addr, h->h_addr, h->h_length);
	channel.sin_port= htons(SERVER_PORT);
	
	c = connect(s, (struct sockaddr *) &channel, sizeof(channel));
	if (c < 0) 
		fatal("connect failed");
	/* Connection is now established. Send file name including 0 byte at end. */
	write(s, argv[2], strlen(argv[2])+1);
}
fatal(char *string)
{
	printf("%s\n", string);
	exit(1);
}

