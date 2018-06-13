#include"headers.h"
int fold(void)
{
		FILE *fp;
		int count;
		char *buf = NULL;
		int i = 0;
		int j = 0;
		int n;
		int x;
		fp = fopen("kumar","r");
		fseek( fp, -1 ,2);
		count = ftell(fp);
		rewind(fp);
		printf("enter nth line:");
		scanf("%d",&n);
		x = n;
		buf = (char *) malloc(count+1);
		while(count) {
				buf[i++] = fgetc(fp);
				count --;
		}

		for( i = 0; buf[i] ; i++) {
				n = x;
				while(n) {
					i++;
					n--;
				}
				if((buf[i] == ' ') || buf[i] == '\t'){
					buf[i] = '\n';
						
					}
				else {
					
					j = i;
					while(buf[j]){
						if (buf[j] != ' '){
							j--;
							continue;
							}
							else{
							buf[j] = '\n';
							break;
							}
						}
				}
		}
			printf("%s",buf);
	return 0;
}
