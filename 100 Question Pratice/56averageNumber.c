#include<stdio.h>

int avg(int ,int ,int ,int, int );

int main(){

  int a , b,c,d,e;
  printf("Hello DPCOding \n");
  printf("Welcome to average number :");
  printf("Please Enter your first number :");
  scanf("%d",&a);
  printf("Please Enter your secoond number :");
  scanf("%d",&b);
  printf("Please Enter your third number :");
  scanf("%d",&c);
  printf("Please Enter your fourth number :");
  scanf("%d",&d);
  printf("Please Enter your fift number :");
  scanf("%d",&e);

  float average = avg( a , b,c, d, e);
  printf("The average is %.2f",average);

  return 0;
  
  
}

int  avg(int a,int b,int c,int d,int e){
  float  sum = a + b + c + d + e;

  return sum /5;
}