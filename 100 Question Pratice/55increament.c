#include<stdio.h>

int increament(int);

int main(){
  int num ;
  printf("Hello DPCOding \n");
    printf("Welcome to showing call  by value  \n");
    printf("Please Enter your number \n");
    scanf("%d",&num);
    

    printf("\n Before Value of number is %d :", num);

    increament(num);
    
    printf("\n after Value of number is %d :", num);

    return 0;
  }

  int increament(int a){
    printf("\n In function  Before Value of a is %d :", a);

   a++;
    
    printf("\n  infuction after Value of a is %d :", a);


  }
