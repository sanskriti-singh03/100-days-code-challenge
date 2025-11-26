//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];

    
    for (int i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    
    printf("\nStudent Details\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

//output:
//Enter details of student 1:
//Name: John
//Roll: 1
//Marks: 85
//Enter details of student 2:
//Name: Alice
//Roll: 2
//Marks: 90
//Enter details of student 3:
//Name: Bob
//Roll: 3
//Marks: 78
//Enter details of student 4:
//Name: Carol
//Roll: 4
//Marks: 88
//Enter details of student 5:
//Name: Dave
//Roll: 5
//Marks: 92
//Student Details
//Name: John | Roll: 1 | Marks: 85
//Name: Alice | Roll: 2 | Marks: 90
//Name: Bob | Roll: 3 | Marks: 78
//Name: Carol | Roll: 4 | Marks: 88
//Name: Dave | Roll: 5 | Marks: 92