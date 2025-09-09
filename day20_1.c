//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() 
{
    int num, digit, product = 1;
    int odd_found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        digit = num % 10;
        if (digit % 2 == 1) 
        {
            product = product * digit;
            odd_found = 1;
        }
        num = num / 10;
    }

    if (odd_found == 1)
    {
        printf("Product of odd digits: %d\n", product);
    } else 
    {
        printf("No odd digits found.\n");
    }

    return 0;
}
