#include<stdio.h>  

int number;  

int main() {
    printf("Hello DPCoding \n");   
    printf("Welcome to the Month day checker\n");   
    printf("Please Enter your Month Number: ");   
    scanf("%d", &number);   

    switch (number) {  
        case 1:  
            printf("Your Month January has 31 days\n");  
            break;  
        case 2:  
            printf("Your Month February has 28/29 days\n");  
            break;  
        case 3:  
            printf("Your Month March has 31 days\n");  
            break;  
        case 4:  
            printf("Your Month April has 30 days\n");  
            break;  
        case 5:  
            printf("Your Month May has 31 days\n");  
            break;  
        case 6:  
            printf("Your Month June has 30 days\n");  
            break;  
        case 7:  
            printf("Your Month July has 31 days\n");  
            break;  
        case 8:  
            printf("Your Month August has 31 days\n");  
            break;  
        case 9:  
            printf("Your Month September has 30 days\n");  
            break;  
        case 10:  
            printf("Your Month October has 31 days\n");  
            break;  
        case 11:  
            printf("Your Month November has 30 days\n");  
            break;  
        case 12:  
            printf("Your Month December has 31 days\n");  
            break;  
        default:  
            printf("Invalid month number! Please enter a number between 1 and 12.\n");  
            break;  
    }  

    return 0;  
}
