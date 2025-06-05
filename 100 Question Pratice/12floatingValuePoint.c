#include<stdio.h>


int main(){
  int number;

  printf("Hello DPCoding \n");
  printf("Plrase Enter your Number : ");
  scanf("%d",&number);// store the value 

  float dk = number;// Convert floating number 
  printf("\n orginal NUmber is : %d ", number);
  printf("\nfloating Number is  : %f",dk);// print on display floating number 
  printf("\n Floating Number is  : %f", (float)number );

  return 0;
  
}