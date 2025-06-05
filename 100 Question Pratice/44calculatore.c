#include<stdio.h>

int num,sum;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to this sum  of number \n");

  do
  {
    printf("Please enter your number ");
    scanf("%d",&num);
    sum += num;
  } while (num != 0);

  printf("Your All number sum is %d",sum);
  

  return 0;
}