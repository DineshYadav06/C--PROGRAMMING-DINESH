#include<stdio.h>

int year ;
int main(){
  printf("Hello DPCOding \n");
  printf("Welcome to this age group cheacker \n" );
  printf("Please Enter your age : ");
  scanf("%d",&year);

  if (year > 60) {
    printf("\nYou are sinior age  and You are %d old.\n", year);
} else if (year >= 20 && year <= 60) {
  printf("\nYou are Adult  age and You are %d old.\n", year);
} else if (year >= 13 && year < 20) {
  printf("\nYou are Teen  age and You are %d old.\n", year);
} else {
  printf("\nYou are child  age and You are %d old.\n", year);
}
return 0;
}