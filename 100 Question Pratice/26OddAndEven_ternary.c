#include<stdio.h>

int num;

int main(){
  printf("Hello DPcoding World \n");
  printf("Welcome to Odd And Even cheacker \n");

  printf("Please Enter your Number \n");
  scanf("%d",&num);
  
 num % 2 == 0 ? printf(" Your number is Even number "):
                printf("Your Number is Odd number  ");
 

  return 0;

}
