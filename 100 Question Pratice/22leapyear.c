#include<stdio.h>

int year;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to This leap year Cheacker \n");
  printf("Please Enter your year : \n");
  scanf("%d", &year);

  if(year % 400 == 0){
    printf(" \n  %d Your Year is leap year" , year);
  }else if(year % 100 == 0 ){
    printf("\n %d Your year year is not leap year " , year);
  }else if (year % 4 ==0 )
  {
    printf(" \n  %d Your Year is leap year" , year);
  }
  else
  {
    printf("\n %d Your year year is not leap year " , year);
  }
  
  return 0;
}