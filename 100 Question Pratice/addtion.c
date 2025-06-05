#include<stdio.h>
int main ()
  {
    int a, b, sum;
    printf("Enter first numbers: ");
    scanf("%d ", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    // Calculate the sum of two integers
    sum = a + b;
    printf("The sum is: %d\n", sum);
    return 0;
  }
// This program prompts the user to enter two integers, calculates their sum, and prints the result.