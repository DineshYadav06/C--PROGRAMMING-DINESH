#include<stdio.h>

int num;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to Print MultipleTable :\n ");
  printf("Please Enter your number : ");
  scanf("%d",&num);

int i = 0;
while ( i <= 10)
{
 printf("\n%d X %d = %d",num,i,num*i);
 i++;
}


  return 0;
}