//Write a program to find the LCM of two numbers.
#include <stdio.h>
int lcm(int a, int b) {
    int temp_a = a, temp_b = b;
    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    int gcd = temp_a;
    return (a * b) / gcd;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));
    return 0;
}