#include<stdio.h>

int num;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to this checking valid postive number : \n");

      printf("Please enter your postive  number \n");
    scanf("%d",&num);

    do{

    if (num <= 0)
    {
      printf("Your number is  not postive number %d", num);
    }

    }while(num <= 0);


      printf(" thank you ! Your number is postive number %d", num);
       return 0;
}