#include<stdio.h>

int main()
{
    int a, b, c;
    char run;

    // Input values and operator
    printf("Enter the values of a, b and operator (+, -, *, /, %%): ");
    scanf("%d %d", &a, &b);  // Use %d for integers
    printf("enter opration : ");
    getchar();  // To consume the newline character left by previous scanf
    scanf("%c", &run);  // Input operator

    // Perform operations based on the operator
    switch(run)
    {
        case '+':
            c = a + b;
            printf("Sum = %d\n", c);
            break;
        
        case '-':
            c = a - b;
            printf("Subtraction = %d\n", c);
            break;
        
        case '*':
            c = a * b;
            printf("Multiplication = %d\n", c);
            break;
        
        case '/':
            if (b != 0)  // Check to avoid divide-by-zero error
            {
                c = a / b;
                printf("Division = %d\n", c);
            }
            else
            {
                printf("Division by zero is not allowed.\n");
            }
            break;
        
        case '%':
            if (b != 0)  // Check to avoid modulus by zero error
            {
                c = a % b;
                printf("Remainder = %d\n", c);
            }
            else
            {
                printf("Modulus by zero is not allowed.\n");
            }
            break;
        
        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}
