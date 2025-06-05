#include<stdio.h>

int marks;

int main() {
    printf("Hello DPCoding \n");
    printf("Welcome to this grade calculator \n");

    printf("Please Enter your Marks: ");
    scanf("%d", &marks);

    marks > 80  ? printf("Your marks is high marks %d ",marks):
                  marks >= 50 ?printf("Your marks is Moderate %d ",marks):
                               printf("Your marks is veary low %d ",marks);



    return 0;

}