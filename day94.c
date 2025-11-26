//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};


void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Enter Name: ");
    scanf("%s", st.name);

    printf("Enter Roll: ");
    scanf("%d", &st.roll);

    printf("Enter Marks: ");
    scanf("%d", &st.marks);

   
    printStudent(st);

    return 0;
}

//output:
//Enter Name: Bob
//Enter Roll: 3
//Enter Marks: 78
//Name: Bob | Roll: 3 | Marks: 78
