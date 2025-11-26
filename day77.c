//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Could not open input.txt\n");
        return 1;
    }

    
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Could not open output.txt\n");
        fclose(fin);
        return 1;
    }

    
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;    
        }
        fputc(ch, fout);     
    }

    fclose(fin);
    fclose(fout);

    printf("File converted to uppercase and written to output.txt\n");

    return 0;
}

//output:
//Input File (input.txt): Hello World\nC programming is fun!
//Output File (output.txt): HELLO WORLD\nC PROGRAMMING IS FUN!