#include<stdio.h>
int num;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to this world \n");
  printf("Please Enter your number \n");
  scanf("%d",&num);

  printf(" 0");
  if(num  > 0){
  printf(" 1");
  }

  int prev = 0;
  int next = 1;
  while (prev + next <= num)
  {
    int temp = prev + next;
    printf(" %d ",temp);
     prev = next;
     next = temp;

  }
  
  return 0;
}