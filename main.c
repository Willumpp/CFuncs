#include <stdio.h>
#include "Cfuncs.h"

int main() {
    char* a = "Hello World";
    
    SizedCharArray testArray;
    testArray.array = a;
    testArray.size = 11;

    printf("Value is: %lf\n", testArray.array[3]);
    printf("Value in array?: %d\n", charIn(testArray, 'd'));

}