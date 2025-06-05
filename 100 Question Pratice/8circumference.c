#include<stdio.h>

int radius;

const float PI = 3.141;

int main(){
  printf("Hello DpCoding\n");
  printf("Please Enter your radius of circle:");
  scanf("%d",&radius);

printf("Your Circle of circumference is : %f cm" ,2 * PI* radius);
  
  return 0;
}