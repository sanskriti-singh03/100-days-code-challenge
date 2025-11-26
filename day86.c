//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char opStr[20];
    int a, b;
    enum Operation op;

    printf("Enter operation (ADD / SUBTRACT / MULTIPLY): ");
    scanf("%s", opStr);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    if (strcmp(opStr, "ADD") == 0)
        op = ADD;
    else if (strcmp(opStr, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(opStr, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid Operation\n");
        return 0;
    }

    
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}

//output:
//Enter operation (ADD / SUBTRACT / MULTIPLY): MULTIPLY
//Enter two numbers: 5 6
//30

