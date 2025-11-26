//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};


struct Student findTopper(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];    
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    
    struct Student top = findTopper(s, n);

    
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}

//output:
//Enter number of students: 3
//Enter details of student 1
//Name: John
//Roll: 1
//Marks: 85
//Enter details of student 2
//Name: Alice
//Roll: 2
//Marks: 90
//Enter details of student 3
//Name: Bob
//Roll: 3
//Marks: 78
//Top Student: Alice | Roll: 2 | Marks: 90