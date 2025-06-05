#include<stdio.h>

int first,second;

int main(){
  printf("Hello DPCoding \n");
  printf("Welcome to this world \n");
  printf("PLease Enter your first number :\n");
  scanf("%d",&first);
  printf("Now,Please Enter your second number \n");
  scanf("%d",&second);

  int min = first > second ? first : second;
  int max = first * second;
  int i ;

  for( int  i = min ; i <= max; i++){
    if( i % first == 0 && i % second == 0){
  printf("The LCM of %d  and %d is %d", first,second,i);
  break;
    }
  }
  return 0;
}