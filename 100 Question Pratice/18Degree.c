#include<stdio.h>

float Fahrenheit;

int main(){
  printf("Hello DPCoding \n ");
  printf("Welcome to this convert to Fahrenheit Celsius calculatore :\n");
  printf("Please Enter your  Fahrenheit Valuse : ");
  scanf("%f",&Fahrenheit);

  float Celsius = (Fahrenheit - 32)*5/9;

  printf("convert to Fahrenheit Celsius value is : %.2f 'C " , Celsius);



  return 0;



}