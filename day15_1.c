//Write a program to calculate the factorial of a number(loops without array/string)
#include <stdio.h>
int main()
{
    int n, i;
    int factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %d", n, factorial);
    }
    return 0;
}
