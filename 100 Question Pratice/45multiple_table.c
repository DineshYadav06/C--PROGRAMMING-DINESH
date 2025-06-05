#include<stdio.h>
 int num;
 

 int main(){
  printf("Hello Dpcoding \n");
  printf("Welcome to print multiple table :\n");
  printf("Please enter your number : \n");
  scanf("%d",&num);

  for( int i = 1 ; i <=10 ; i++){

    printf("\n%d X %d = %d",num,i,num* i);

  }
  return 0;
 }