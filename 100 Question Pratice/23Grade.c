#include<stdio.h>

int marks;

int main() {
    printf("Hello DPCoding \n");
    printf("Welcome to this grade calculator \n");

    printf("Please Enter your Marks: ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("Your grade is A. Well done! You scored %d marks.\n", marks);
    } else if (marks >= 75 && marks <= 90) {
        printf("Your grade is B. Good job! You scored %d marks.\n", marks);
    } else if (marks >= 60 && marks < 75) {
        printf("Your grade is C. Average performance. You scored %d marks.\n", marks);
    } else if (marks >= 40 && marks < 60) {
        printf("Your grade is D. Work harder! You scored %d marks.\n", marks);
    } else {
        printf("You have failed. Please try again next time. Your score is %d marks.\n", marks);
    }

    return 0;
}
