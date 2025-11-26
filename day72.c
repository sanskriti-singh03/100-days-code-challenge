//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>

int main() {
    FILE *fp;
    char line[500];

    
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
//output:
//File: info.txt (Content: Name: Rahul\nAge: 23)
//Name: Rahul
//Age: 23
