#include<stdio.h>
float Principle ,rate,time;


int main(){
  printf("Hello  DPCoding \n");
  printf("Welcome to this calculator\n");
  printf("\nPlease enter your  simple amount :");
  scanf("%f",&Principle);
  printf("\nNow,Please Enter your rate of interest :");
  scanf("%f",&rate);
  printf("\nNow, Please Enter your time :");
  scanf("%f",&time);

  float interest =( Principle *rate*time)/100;


  printf("\nThe simple Interest  is : %.2f" , interest);


  return 0;
  
}