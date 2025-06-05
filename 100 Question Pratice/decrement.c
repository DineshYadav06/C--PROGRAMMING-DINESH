#include <stdio.h>

int main(){
  int a , c;
  printf("Enter a number: ");
  scanf("%d", &a);
  c = ++a; 
  printf("The  value is: %d\n", c);
  return 0;
}