#include<stdio.h>
int num, sum;

 int main(){
  printf("hello DPCOding \n");
  printf("welcome to sum postive number negative number skip :\n ");


  do
  {
    printf("please enter your number :");
    scanf("%d",&num);
   if( num < 0) continue;

   sum += num;
   } while (num != 0);

   printf("Your  all postive number  sum is  %d", sum);

   return 0;
  
 }