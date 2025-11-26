//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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

        int firstNeg = 0;   

        
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;      
            }
        }

        printf("%d", firstNeg);

        if (i != n - k) {
            printf(" ");
        }
    }

    return 0;
}

//output:
//Enter size of array: 8
//Enter array elements:12,-1,-7,8,-15,30,16,-28
//Enter k: 3
//-1 -1 -15 -15 0  -28
