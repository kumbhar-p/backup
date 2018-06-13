#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netinet/ip.h>
#include<arpa/inet.h>
int main(int argc, char **argv)
{
	char buf[20];
	struct sockaddr_in v, v1;
	int sfd, len, nsfd;
	
	if(argc < 2) {
		printf("usage : ./ser port_num");
		exit(0);
	}
	if((sfd = socket(AF_INET, SOCK_STREAM,0)) < 0) {
		perror("socket");
		exit(0);
	}
	printf("sfd : %d\n", sfd);
	
	v.sin_family = AF_INET;
	v.sin_port = htons(atoi(argv[1]));
	v.sin_addr.s_addr = inet_addr("0.0.0.0");
	
	len = sizeof(v);
	
	if(bind(sfd, (struct sockaddr *)&v, len) < 0) {
		perror("bind");
		exit(0);
	}
	
	listen(sfd, 5);
	perror("listen");

	nsfd = accept(sfd, (struct sockaddr *)&v1, &len);
	perror("accept");
		
	while(1) {
		if(fork() == 0) {
				read(nsfd, buf, sizeof(buf));
				printf("data - %s\n",buf);
			}
		
		else {   
			scanf("%s", buf);
			write(nsfd, buf,sizeof(buf));
			
			}
		}
	
	
	return 0;
}
