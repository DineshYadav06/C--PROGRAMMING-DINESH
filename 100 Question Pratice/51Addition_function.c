#include<stdio.h>

int add(int , int ,int ,int );

int main(){
  printf("Hello DPCoding \n");
  printf("\n%d ", add( 12 , 23, 1, 3));
  printf("\n%d ", add( 2 , 2, 1, 3));
  printf("\n%d ", add( 12 , 3, 16, 3));
  printf("\n%d ", add( 0212 , 263, 61, 63));
  return 0;
}

 int add(int a , int b ,int c , int d){ 
  int sum = a + b + c + d;

  return  sum;


 }