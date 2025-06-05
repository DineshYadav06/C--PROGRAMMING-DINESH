#include<stdio.h>

int a,b,sum,sub,mult,div,mol;

int main(){
  printf("Hello DPCoding \n ");
  printf("Wellcome to this word :\n");
  printf("Please enter your First number :\n");
  scanf("%d",&a);
  printf("Now,Please enter your Scond number :\n");
  scanf("%d",&b);

  sum = a+b;
  sub = a - b;
  mult = a*b;
  div = a/b;
  mol = a%b;


  printf("Your First Number %d and Second Number % d,Adition is %d \n", a, b,sum);
  printf("Your First Number %d and Second Number % d,Substration is %d\n ", a, b,sub);
  printf("Your First Number %d and Second Number % d,multipliction is %d \n", a, b,mult);
  printf("Your First Number %d and Second Number % d,division is %d \n ", a, b,div);
  printf("Your First Number %d and Second Number % d,modulus is %d \n", a, b,mol);
  return 0;
}