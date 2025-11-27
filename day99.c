//Q149: Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    
    struct Student *s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    
    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    
    printf("Name: %s | Roll: %d | Marks: %d\n",
           s->name, s->roll, s->marks);

    
    free(s);

    return 0;
}

//output:
//Enter Name: John
//Enter Roll: 23
//Enter Marks: 89
//Name: John | Roll: 23 | Marks: 89

