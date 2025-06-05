#include<stdio.h>

int a,b,c,d;

int main(){
  printf("Hello DpCoding \n");
  printf("Swap two number world \n");

  printf("Please enter your first number :");
  scanf("%d",&a);
  printf("Please Enter your second number is :\n");
    scanf("%d",&b);
    printf("My First number is %d  and \n Second number is %d" ,a , b);

    c = a; // Store the value of a in c
    a = b; // Assign the value of b to a
    b = c; // Assign the value of c (original a) to b
 
    printf("\nMy First number is %d,and second number is %d \n",a,b);
    return 0;

  }

