#include"headers.h"
int comment(void)
{
	FILE *fp;
	FILE *fp1;
	int i = 0;
	char ch;
	int count = 0;
	int count1 = 0;
	char *buf = NULL;
	fp = fopen("kumar.t","r");
	fp1 = fopen("anand","w");
	while((ch=fgetc(fp)) != EOF)
		count++;
	printf("count=%d\n",count);
	count1 = count; 
	fseek(fp,0,0);
	buf =(char*) malloc(count+1);
	while(count--)
			buf[i++] = fgetc(fp);
	for(i=0;buf[i];i++)
		{
			 if((buf[i] == '/') && (buf[i+1] == '*'))
            {
                for(;buf[i];i++) {
			buf[i] = ' ';
                      if(buf[i+1] !='/'){
                         //   memmove(buf+i,buf+i+1,strlen(buf+i+1)+1);
			buf[i] = ' ';
                           //     i--;
			continue;
                           } 
			else{
				buf[i] = ' ';
				buf[i+1]=' ';
                    	    break;
				}
            }
    

		}

	if(buf[i] == '"'){
			for(i = i+1 ; buf[i] ; i++){
					if(buf[i] != 34)
						continue;
					if(buf[i] == 34)
						break;
				}
		}

	if((buf[i] == '/') &&(buf[i+1] == '/')){
		for( ; buf[i];i++){
				if(buf[i] != '\n'){
				//	memmove(buf+i,buf+i+1,strlen(buf+i+1)+1);
				//	i--;
					buf[i] = ' ';
				}
			else
				break;
			}
		}

}
	printf("%s",buf);
	fwrite(buf,count1,1,fp1);
	return 0;
}
			






















	
	
