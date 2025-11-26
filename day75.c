//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    printf("Enter file name: ");
    scanf("%s", filename);

    
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}

//output:
//Enter file name: myfile.txt
//Enter text to append: This is the new line to be added.
//File updated successfully with appended text.

