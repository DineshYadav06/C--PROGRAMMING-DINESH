#include<stdio.h>

int num;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to this cheaking pailindrome number \n");
  printf("Please Enter your number :");
  scanf("%d",&num);

  int  reverse = 0;
  int copy = num;
  while (copy > 0)
  {
    reverse = reverse*10 + copy % 10;
    copy /= 10;
  }

  if (reverse == num)
  {
    printf("Your number %d is pailindrome :",num);
  }else{
    printf("Your number %d is not pailindrome :",num);
  }
  



  return 0;

}