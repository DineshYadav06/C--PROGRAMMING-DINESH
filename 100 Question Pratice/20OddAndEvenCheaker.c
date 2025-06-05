#include<stdio.h>

int num;

int main(){
  printf("Hello DpCoding \n");
  printf("Welcome to This Cheacker \n");
  printf("Please Entre your number : ");
  scanf("%d",&num);
  
if( num % 2 == 0){
  printf("This number is Even : %d",num);
}else if (num %2 != 0)
{
  printf("This number is odd number : %d",num);
}else{
  printf("Invalid ");
}


  
  return 0;
}