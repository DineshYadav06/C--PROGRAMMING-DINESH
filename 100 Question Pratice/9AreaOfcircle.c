#include<stdio.h>

int radius;
const float PI = 3.141;


int main(){
  printf("Hello Dpcoding\n");
  printf("Welcome to area of radius \n");

  printf("Please enter your radius of circle :");
  scanf("%d",&radius);

  printf("Area of Circle is : %f cm",PI*radius*radius);
  return 0;

}