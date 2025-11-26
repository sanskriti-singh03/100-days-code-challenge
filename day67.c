//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];
    printf("Enter elements of first sorted array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];
    printf("Enter elements of second sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    
    while (j < n) {
        merged[k++] = nums2[j++];
    }

    
    for (int x = 0; x < m + n; x++) {
        printf("%d", merged[x]);
        if (x != m + n - 1) printf(" ");
    }

    return 0;
}

//output:
//Enter size of first array: 3
//Enter elements of first sorted array:
//1,3,5
//Enter size of second array: 4
//Enter elements of second sorted array:
//2,4,6,8
//1 2 3 4 5 6 8
