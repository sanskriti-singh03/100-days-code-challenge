//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char source[100], destination[100];
    FILE *fs, *fd;
    int ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);

    
    fs = fopen(source, "r");
    if (fs == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }

    
    fd = fopen(destination, "w");
    if (fd == NULL) {
        printf("Could not create destination file.\n");
        fclose(fs);
        return 1;
    }

   
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s\n", destination);

    return 0;
}
//output:
//Enter source file name: source.txt
//Enter destination file name: dest.txt
//File copied successfully to dest.txt
