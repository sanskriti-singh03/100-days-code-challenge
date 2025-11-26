//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll No: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}

//output:
//Enter Name: Alice
//Enter Roll No: 101
//Enter Marks: 95
//Name: Alice | Roll: 101 | Marks: 95
