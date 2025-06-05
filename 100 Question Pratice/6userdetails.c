#include<stdio.h>

 char firstname[20];
 char lastname[20];
 int age;

int main(){
  printf("Hello DPCoding \n");
  printf("PLease Enter your First name :");
  scanf("%19s",firstname);
  printf("Now, Please your Last Name :");
  scanf("%19s",lastname);
printf("Please enter your age : ");
scanf("%d",&age);

printf("Your Name is %s %s and your age is %d",firstname,lastname,age);
return 0;

}