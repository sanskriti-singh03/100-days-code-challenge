//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

   
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

   
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    
    printf("\nTopper: %s (Marks: %d)\n",
           s[topperIndex].name, s[topperIndex].marks);

    return 0;
}

//output:
//Enter number of students: 3
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
//Topper: Alice (Marks: 90)