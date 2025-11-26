//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details stored successfully in employee.dat\n");

    
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    printf("\nEmployee Data Read From File\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}

//output:
//Enter Employee Name: Alice
//Enter Employee ID: 101
//Enter Salary: 55000
//
//Employee Data Read From File
//Name: Alice
//ID: 101
//Salary: 55000.00
