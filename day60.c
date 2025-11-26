//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("-1");
        return 0;
    }

 
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d", max);

        if (i != n - k) {
            printf(" ");
        }
    }

    return 0;
}

//output:
//Enter size of array: 8
//Enter array elements:1,3,-1,-3,5,3,6,7
//Enter k: 3
//3 3 5 5 6 7