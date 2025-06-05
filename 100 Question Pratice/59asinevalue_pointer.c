#include<stdio.h>
 

 int main(){
  int num;
   int *ptr = &num;
  printf("Hello DPCoding \n");
  printf("WElcome to this world in this asing the value \n ");

  printf("Please enter your number \n");
  scanf("%d", &ptr);

  printf("the  value is : %d", ptr);
  printf("the value is %d", num);


   return 0 ;

   
}
