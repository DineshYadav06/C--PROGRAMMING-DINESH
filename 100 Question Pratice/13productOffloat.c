#include<stdio.h>

float num1, num2 ;



int main(){
  printf("Helo Dpcoding \n");
  printf("Wellcome to product of two float \n");

  printf("Please enter your First number :");
  scanf("%f",&num1);
  printf("Now , Please Enter your second number :\n");
  scanf("%f",&num2);

  
  float product = num1*num2;

  printf("\n Floating product is : %f", product);



  return 0;
}