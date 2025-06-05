#include<stdio.h>

int main() {  
    int num;  
    printf("Hello DPCoding \n");  
    printf("Welcome to this Checker \n");  
    printf("Please Enter your number: ");  
    scanf("%d", &num);  

    
    if(num > 0) {  
        printf("The number is positive. : %d\n",num);  
    } else if(num < 0) {  
        printf("The number is negative: %d\n", num);  
    } else {  
        printf("The number is zero.\n");  
    }

    return 0; 
}
