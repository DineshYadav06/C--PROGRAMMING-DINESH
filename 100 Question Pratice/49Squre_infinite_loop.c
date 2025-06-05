#include<stdio.h>
 int num;

 int main(){
  printf("Hello DpCoding \n");
  printf("Welcome to infinte loop  number squres \n");

  while (1)
  {
    printf("\nPlease enter your number ");
    scanf("%d",&num);
    if(num == -1)break;
    printf("\nThe suqure of %d is %d ", num, num+num);


  }
  

  return 0;
  
 }