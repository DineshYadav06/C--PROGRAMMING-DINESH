#include<stdio.h>

float base , height , Area ;

int main(){
  printf("Hello DPCoding \n");
  printf("Welocome to this calculatore\n");
  printf("Please Enter your base of Triangle : ");
  scanf("%f",&base);

  printf("\nNow, Please Enter your height of triangle : ");
  scanf("%f",&height);
  
  Area =  0.5*base*height;

 
  printf("Area of tringle is : %f cm*cm" , Area);

  return 0;


}