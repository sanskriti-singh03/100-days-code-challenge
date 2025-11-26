//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id,
           e.joining.day, e.joining.month, e.joining.year);

    return 0;
}

//output:
//Enter Employee Name: Alice
//Enter Employee ID: 101
//Enter Joining Date (day month year): 15 8 2020
//Name: Alice | ID: 101 | Joining Date: 15/08/2020
