//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main()
{
    int num, firstDigit, lastDigit, middlePart, digitsCount = 0,
    divisor = 1, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    firstDigit = num;
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
        digitsCount++;
        divisor *= 10;
    }
    middlePart = (num % divisor) / 10;
    swappedNum = (lastDigit * divisor) + (middlePart * 10) +
                    firstDigit;
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
