//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    SUCCESS,    
    FAILURE,    
    TIMEOUT     
};

int main() {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n",
           SUCCESS, FAILURE, TIMEOUT);

    return 0;
}

//output:
//SUCCESS=0, FAILURE=1, TIMEOUT=2
