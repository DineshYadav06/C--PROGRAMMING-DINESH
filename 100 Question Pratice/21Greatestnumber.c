#include<stdio.h>

int  a,b,c;

int main(){
  printf("Hello DPCOding \n");
  printf("Welcome to world Cheacker \n");

  printf("Please enter your  first number :");
  scanf("%d",&a);
  printf("\nPlease Enter your second number  :");
  scanf("%d",&b);
  printf("\nPlease Enter your third number : ");
  scanf("%d",&c);
  

  if(a > b && a > c){
    printf("\n First number is greatest Number %d" , a);

  }else if (b > a &&  b > c){
    printf("\nSecond number is greatest number %d" ,b);
  } else {
    printf(" \nThird Number is greastest number : %d",c);
  }
  
 return 0;
}