//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int missingNumber = expectedSum - actualSum;

    printf("%d", missingNumber);

    return 0;
}

//output:
//Enter size of array: 5
//Enter array elements:3,0,1,4
//2

