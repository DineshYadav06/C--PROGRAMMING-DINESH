#include<stdio.h>

int num;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to this world \n");
  printf("Please Enter your number\n");
  scanf("%d",&num);
  
  int  reverse = 0;
  int copy = num;
  while (copy > 0)
  {
    reverse = reverse*10 + copy % 10;
    copy /= 10;
  }
  printf("The reverse of %d  is %d ",num,reverse);
  return 0;
  
  
}