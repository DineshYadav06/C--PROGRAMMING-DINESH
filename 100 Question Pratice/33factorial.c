#include<stdio.h>


int num;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to this factorial Calculatore \n");
  printf("Please Enter your number for find factorial number ");
  scanf("%d",&num);

  int  i = 1;
   int fact = 1;
  while (i <= num)
  {
     fact = fact*i;
     i++;
  }

  printf("Your factorial of  %d is  %d",num,fact);
 


  return 0;
}