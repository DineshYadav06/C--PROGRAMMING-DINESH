#include<stdio.h>   
int first, second, add, sub, mult, div, mod, choose;

int main() {
    printf("Hello DPCoding \n");
    printf("Welcome to this simple calculator \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("5. Modulus\n");
    printf("Please Enter your Operation: ");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            printf("Please Enter your two numbers \n");
            scanf("%d %d", &first, &second);
            add = first + second;
            printf("Your result is %d\n", add);
            break;
        case 2:
            printf("Please Enter your two numbers \n");
            scanf("%d %d", &first, &second);
            sub = first - second;
            printf("Your result is %d\n", sub);
            break;
        case 3:
            printf("Please Enter your two numbers \n");
            scanf("%d %d", &first, &second);
            if (second != 0) {
                div = first / second;
                printf("Your result is %d\n", div);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case 4:
            printf("Please Enter your two numbers \n");
            scanf("%d %d", &first, &second);
            mult = first * second;
            printf("Your result is %d\n", mult);
            break;
        case 5:
            printf("Please Enter your two numbers \n");
            scanf("%d %d", &first, &second);
            if (second != 0) {
                mod = first % second;
                printf("Your result is %d\n", mod);
            } else {
                printf("Error! Modulus by zero.\n");
            }
            break;
        default:
            printf("Invalid choice. Thank you!\n");
            break;
    }

    return 0;
}
