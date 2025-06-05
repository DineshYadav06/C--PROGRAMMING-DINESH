#include<stdio.h>

int first , second ;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to this Minimum Number cheacker :\n");
  printf("Please Enter your first number \n");
  scanf("%d",&first);
  printf("Please Enter your second number \n");
  scanf("%d",&second);

  int min = first < second ? first : second;
  printf("Your Minimim Number is %d ",min);
  return 0;
}