//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
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

    
    int freq[10000] = {0};

    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;

        if (freq[arr[i]] == 2) {   
            printf("%d", arr[i]);
            return 0;
        }
    }

    return 0;
}

//output:
//Enter size of array: 5
//Enter array elements:1,3,4,2,3
//3

