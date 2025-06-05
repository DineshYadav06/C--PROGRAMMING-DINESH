#include<stdio.h>  
int reverse(int num, int rev);  

int main() {   
    int num;   
    printf("Hello DPCoding \n");   
    printf("Welcome to checking palindrome number:\n");   
    printf("Please enter your number: ");   
    scanf("%d", &num);    

    int rev = reverse(num, 0);   
    if (num == rev) {   
        printf("%d is a palindrome.\n", num);   
    } else {     
        printf("%d is not a palindrome.\n", num);   
    }   

    return 0;    
}  

int reverse(int num, int rev) { 
    if (num == 0) { 
        return rev; 
    }  
    int reminder = num % 10;  
    int new_num = num / 10;  
    int new_rev = rev * 10 + reminder;  
    return reverse(new_num, new_rev);  
}  
