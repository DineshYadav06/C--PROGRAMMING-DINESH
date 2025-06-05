#include<stdio.h>

float greater( float , float );


int main(){
  float first ,second;
  printf("HEllo DPCoding \n");
  printf("Welcome to cheack two number :\n");
  printf("Please enter your first number :");
  scanf("%f", &first);
  printf("Now,Please enter your second number :");
  scanf("%f",&second);

  printf("Your greater number is : %f", greater(first, second));
  return 0;
 

}

float greater(float first , float second){
  return first > second ? first : second;
 
}