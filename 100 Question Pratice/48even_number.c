#include<stdio.h>

int max;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to print even  number \n");
    printf("please enter your max number :");
    scanf("%d",&max);

    for( int i = 2; i <= max; i++){
      if (i % 2 == 1)continue;
      
      printf("\n%d", i);
    }
   
   return 0;
}