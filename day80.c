//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Could not create file.\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        char name[50];
        int roll, marks;

        printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Roll Number: ");
        scanf("%d", &roll);

        printf("Enter Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char name[50];
    int roll, marks;

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}

//output:
//Enter number of students: 2
//Enter Name: Alice
//Enter Roll Number: 101
//Enter Marks: 95
//Enter Name: Bob
//Enter Roll Number: 102
//Enter Marks: 88
//Name: Alice | Roll: 101 | Marks: 95
//Name: Bob | Roll: 102 | Marks: 88
