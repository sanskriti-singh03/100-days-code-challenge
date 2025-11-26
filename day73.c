//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100] = "sample.txt";  
    int characters = 0, words = 0, lines = 0;
    char ch, prev = ' ';

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {

        characters++;

        
        if (ch == '\n') {
            lines++;
        }

        
        if ((prev == ' ' || prev == '\n' || prev == '\t') &&
            (ch != ' ' && ch != '\n' && ch != '\t')) {
            words++;
        }

        prev = ch;
    }

    
    if (characters > 0 && prev != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

//output:
//File: sample.txt (Content: Hello world\nThis is C programming)
//Characters:  thirty
//Words: 6
//Lines: 2

