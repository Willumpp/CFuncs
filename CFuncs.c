#include <stdio.h>

/*
    #define: defines "macros"
    Macros are replaced by there corresponding literal at compile time
    Can also be functions. Bare in mind they REPLACE text at compile time (i.e no type checking and unpredictability)
*/
#define TRUE 1
#define FALSE 0

typedef int BOOL; // Typedef creates aliases for existing types, useful with structs

// Array with stored size
typedef struct {
    int* array;
    int size;
} SizedArray;

// Enumerate 3 main datatypes
typedef enum {
    T_INT,
    T_CHAR,
    T_FLOAT
} E_TYPE;

/**
 * Checks if given value is within array
 * @param array Array to search through
 * @param value Value to search for within array
 * @param size Length of array to search through
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL intInSize(int* array, int value, int size) {

    for (int i = 0; i < size; i += 1) {
        int ival = array[i];

        if (ival == value) { return TRUE; };
    }

    return FALSE;
}

/**
 * Checks if given value is within SIzedArray
 * @param array SizedArray to search through (make sure size is specified)
 * @param value Value to search for within array
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL intIn(SizedArray array, int value) {

    return intInSize(array.array, value, array.size);
}


int main() {
    int n[5] = {1, 2, 3, 4, 5};
    SizedArray testArray;
    testArray.array = n;
    testArray.size = 5;

    printf("Value is: %d", testArray.array[3]);
}