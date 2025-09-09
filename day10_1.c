//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid side lengths");
    }
    else if (a == b && b == c)
    {
        printf("The triangle is Equilateral");
    }
    else if (a == b || b == c || a == c)
    {
        printf("The triangle is Isosceles");
    }
    else
    {
        printf("The triangle is Scalene");
    }
    return 0;
}