//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter string: ");
    scanf("%s", s);   

    int freq[256] = {0};   
    int left = 0;
    int maxLen = 0;

  
    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = s[right];
        freq[ch]++;

       
        while (freq[ch] > 1) {
            unsigned char leftChar = s[left];
            freq[leftChar]--;
            left++;
        }

       
        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    printf("%d", maxLen);

    return 0;
}

//output:
//Enter string: abcabcbb
//3
//Enter string: bbbbb
//1
