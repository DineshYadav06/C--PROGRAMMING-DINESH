#include<stdio.h>

int num;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to printf Aramstrong number \n");
  printf("Now,Please Enter your number\n");
  scanf("%d",&num);

  int sum = 0;
  int copy = num;
  while (copy > 0)
  {
    int digit = copy % 10;
     sum += digit*digit*digit;
     copy/= 10;

  }
  if (sum == num)
  {
    printf("The number  %d is  AramStrong number\n ",num);

  }else{
    printf("The number %d is not aramstrong number ",num);

  }
  

  
  return 0;
  
}