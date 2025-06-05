#include<stdio.h>

int num;

int main(){
  printf("Hello DPCoding\n");
  printf("Welcome to this world\n");
  printf("Please Enter your number :");
  scanf("%d",&num);


  for( int i = 2; i < num ; i++){
    if (num % i == 0);
    {
      printf("\n%d is not prime number ", num);
      return 0; 
 
    }
       
  }
  printf("\n %d is prime number ", num) ;
 return 0; 

}