#include<stdio.h>

int num;

int main(){
  printf("Hello DPCoding\n");
  printf("Welcome to this world\n");
  printf("Please Enter your number :");
  scanf("%d",&num);


  int i = 2;
  while ( i < num) {
    if (num % i == 0)
    {
      printf("Your number is not  prime number\n %d", num);
      return 0;
    }
    
   i++;
   
  }
  printf("Your number is  prime number %d",num);
  return 0;
  

}