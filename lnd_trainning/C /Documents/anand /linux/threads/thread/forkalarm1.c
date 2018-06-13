#include<stdio.h>
#include<string.h>
int main(int argc, char **argv)
{
	int seconds;
	char line[128];
	char message[64];
	int pid ;
	pid = vfork();
	if(pid > 0){
	while(1){
		printf(" parent alarm > ");
		(fgets(line,sizeof(line),stdin));
		printf("parent\n");
		sscanf(line,"%d %s4[\n]",&seconds,message);
			fprintf(stderr ,"bad command\n");
		sleep(10);
			}
		}
	else if(pid  == 0){
    while(1){
		fflush(stdin);
		sleep(seconds);
        printf("child alarm > ");
//		sleep(5);
   //     if(fgets(line,sizeof(line),stdin))
     //   printf("child alarm > ");
	//	printf("child\n");
      //  if(strlen(line) <= 1)
        //    continue;
 //       if(sscanf(line,"%d %s4[\n]",&seconds,message) <2)
 //           fprintf(stderr ,"bad command\n");
   //     else {
	//		printf("sleeping in child :\n");
      //      sleep(seconds);
            printf("child  : [%d] %s\n",seconds,message);
            }
        }
   // }
}
