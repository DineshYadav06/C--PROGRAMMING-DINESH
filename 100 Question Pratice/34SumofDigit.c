#include<stdio.h>

int num;

int main(){
  printf("Hello DpCoding \n");
  printf("Welcome to  compute sum calculatore\n");
  printf("Please Enter your number ");
  scanf("%d",&num);

  int sum = 0;

  while (num > 0)
  {
    sum += num % 10;
    num /= 10 ;
  }

  printf("Your number %d sum of digit is %d" ,num, sum);

  
  

  return 0;
}
