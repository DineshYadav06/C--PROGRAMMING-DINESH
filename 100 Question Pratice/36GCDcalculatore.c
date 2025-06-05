#include<stdio.h>  
int first, second;

int main() {  
    printf("Hello DPCoding \n");  
    printf("Welcome to this world \n");  
    printf("Please Enter your first number :\n");  
    scanf("%d", &first);  
    printf("Now, Please Enter your second number \n");  
    scanf("%d", &second);  
    
    int min = first < second ? first : second;  // Start from the smaller number
    int i;

    for (i = min; i >= 1; i--) {  // Iterate downwards to find the GCD
        if (first % i == 0 && second % i == 0) {
            printf("The GCD of %d and %d is %d", first, second, i);
            break;
        }
    }


    return 0;
}
