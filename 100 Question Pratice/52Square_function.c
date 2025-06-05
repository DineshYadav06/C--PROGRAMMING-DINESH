#include<stdio.h>

 int square(int);

 int main(){
   int num;
  printf("Hello DPCoding \n");
  printf("Welcome to this world \n");
  printf("Please Enter your number :");
  scanf("%d",&num);
  printf("Your number %d of squre is  %d",num ,square(num));
  return 0;
 }

 int square(int num){

  return num * num;
 }