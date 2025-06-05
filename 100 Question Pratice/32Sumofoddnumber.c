#include<stdio.h>

int num;

int main(){
  printf("Helllo DpCoding\n");
  printf("Welcome to this  sum of odd number calculatore\n");

  printf("Please Enter your number :\n");
  scanf("%d",&num);


  int  i = 1;
  int sum = 0;

 while( i <= num){
  sum += i;
  i += 2;
 }

 printf("\nSum of all odd Number form 1 to %d  is %d :",num,sum);
 return 0;




}