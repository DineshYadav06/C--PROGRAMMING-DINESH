#include<stdio.h>

int number ;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to the calculatore absolute value\n");
  printf("\nPlease Enter your number :");
  scanf("%d",&number);
  
  printf("%d Absolute value ", number > 0 ? number : -number);

  return 0;
}