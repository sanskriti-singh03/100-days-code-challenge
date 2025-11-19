//Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } else 
    {
        return n * factorial(n - 1);
    }
}
int is_strong_number(int num) 
{
    int original_num = num;
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original_num;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_strong_number(num)) 
    {
        printf("%d is a strong number.\n", num);
    }
     else 
    {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}

    
