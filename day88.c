//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum Color colors[] = { RED, YELLOW, GREEN };
    char *names[] = { "RED", "YELLOW", "GREEN" };

    int size = sizeof(colors) / sizeof(colors[0]);

    for (int i = 0; i < size; i++) {
        printf("%s=%d\n", names[i], colors[i]);
    }

    return 0;
}

//output:
//RED=0
//YELLOW=1
//GREEN=2
