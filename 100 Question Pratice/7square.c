#include<stdio.h>

int length, width,area;

int main(){
  printf("Hello DPCoding \n");
  printf("Please Enter your length of square :");
  scanf("%d",&length);
  printf("Now, Please Enter your width of square :");
  scanf("%d",&width);
  area = length*width;

  printf("Your square of Area is %d:",area);
  return 0;
}