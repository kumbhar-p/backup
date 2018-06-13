#include<stdio.h>
#include<stdbool.h>
#include<fcntl.h>
#include<unistd.h>
#define DATA_MASK 0xFFFFFF

int main(){

  static unsigned long data_buf;
  static bool last_t_bit = 0, current_t_bit;
  int i,j;
  FILE* fp;
	printf ("user space program\n");

  while(1){

    fp = fopen("/sys/irRemote/gpio24/irdata","r");
    fscanf(fp, "%ld", &data_buf);
  //      fclose(fp);
  //      printf(" read value : %lx", data_buf);
    printf(" ");
    current_t_bit = (data_buf & 0xFF000000)? 0 : 1;
    if(current_t_bit != last_t_bit){
      switch(data_buf & DATA_MASK){
        case 0x100114:
          printf("Button pressed = \" Play \" \n");
          break;
        case 0x100141:
          printf("Button pressed = \" Stop \" \n");
          break;
        case 0x100050:
          printf("Button pressed = \" Power \" \n");
          break;
        case 0x100115:
          printf("Button pressed = \" Record \" \n");
          break;
        case 0x100404:
          printf("Button pressed = \" OK \" \n");
          break;
        case 0x100405:
          printf("Button pressed = \" Back \" \n");
          break;
        case 0x100145:
          printf("Button pressed = \" Replay \" \n");
          break;
        case 0x100144:
          printf("Button pressed = \" Skip \" \n");
          break;
        case 0x100111:
          printf("Button pressed = \" Rew \" \n");
          break;
        case 0x100401:
          printf("Button pressed = \" Right \" \n");
          break;
        case 0x100400:
          printf("Button pressed = \" Left \" \n");
          break;
        case 0x100154:
          printf("Button pressed = \" Up \" \n");
          break;
        case 0x100155:
          printf("Button pressed = \" Down \" \n");
          break;
        case 0x100100:
          printf("Button pressed = \" Vol+ \" \n");
          break;
        case 0x100101:
          printf("Button pressed = \" Vol- \" \n");
          break;
        case 0x100104:
          printf("Button pressed = \" Ch+ \" \n");
          break;
        case 0x100105:
          printf("Button pressed = \" Ch- \" \n");
          break;
        case 0x100051:
          printf("Button pressed = \" Start \" \n");
          break;
        case 0x100054:
          printf("Button pressed = \" Mute \" \n");
          break;
        case 0x101040:
          printf("Button pressed = \" Record TV \" \n");
          break;
        case 0x100414:
          printf("Button pressed = \" Guide \" \n");
          break;
        case 0x100411:
          printf("Button pressed = \" Live TV \" \n");
          break;
        case 0x100410:
          printf("Button pressed = \" DVD Menu \" \n");
          break;
        case 0x100110:
          printf("Button pressed = \" Fwd \" \n");
          break;
        case 0x100140:
          printf("Button pressed = \" Pause \" \n");
          break;
        case 0x100055:
          printf("Button pressed = \" More \" \n");
          break;
        default:
          //printf("Invalid button"); 
          break;
      }
    } 

    last_t_bit = current_t_bit;
    usleep(30000);
    fclose(fp);
  }

  return 0;



}

