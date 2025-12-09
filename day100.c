#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
void printStudent(struct Student *s) {
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);
}
int main() {
    struct Student st;
    struct Student *ptr = &st;
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter Roll: ");
    scanf("%d", &ptr->roll);
    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);
    printStudent(ptr);
    return 0;
}
        
//output:
//Enter Name: John
//Enter Roll: 106
//Enter Marks: 91
//Modified Data: Name: John | Roll: 106 | Marks: 91
