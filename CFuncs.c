#include <stdio.h>
#include "Cfuncs.h"

/**
 * Checks if given value is within array
 * @param array Array to search through
 * @param value Value to search for within array
 * @param size Length of array to search through
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL intInSize(int* array, int value, int size) {

    for (int i = 0; i < size; i += 1) {
        if (array[i] == value) { return TRUE; };
    }

    return FALSE;
}

/**
 * Checks if given value is within array
 * @param array Array to search through
 * @param value Value to search for within array
 * @param size Length of array to search through
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL floatInSize(float* array, float value, int size) {

    for (int i = 0; i < size; i += 1) {
        if (FLOAT_EQUAL(array[i], value)) { return TRUE; };
    }

    return FALSE;
}

/**
 * Checks if given value is within array
 * @param array Array to search through
 * @param value Value to search for within array
 * @param size Length of array to search through
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL doubleInSize(double* array, double value, int size) {

    for (int i = 0; i < size; i += 1) {
        if (DOUBLE_EQUAL(array[i], value)) { return TRUE; };
    }

    return FALSE;
}

/**
 * Checks if given value is within array
 * @param array Array to search through
 * @param value Value to search for within array
 * @param size Length of array to search through
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL charInSize(char* array, char value, int size) {

    for (int i = 0; i < size; i += 1) {
        if (array[i] == value) { return TRUE; };
    }

    return FALSE;
}

/**
 * Checks if given value is within SIzedArray
 * @param array SizedArray to search through (make sure size is specified)
 * @param value Value to search for within array
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL intIn(SizedIntArray array, int value) {

    return intInSize(array.array, value, array.size);
}

/**
 * Checks if given value is within SIzedArray
 * @param array SizedArray to search through (make sure size is specified)
 * @param value Value to search for within array
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL floatIn(SizedFloatArray array, float value) {

    return floatInSize(array.array, value, array.size);
}


/**
 * Checks if given value is within SIzedArray
 * @param array SizedArray to search through (make sure size is specified)
 * @param value Value to search for within array
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL doubleIn(SizedDoubleArray array, double value) {

    return doubleInSize(array.array, value, array.size);
}

/**
 * Checks if given value is within SIzedArray
 * @param array SizedArray to search through (make sure size is specified)
 * @param value Value to search for within array
 * @return TRUE (1) if in otherwise FALSE (0) 
*/
BOOL charIn(SizedCharArray array, char value) {

    return charInSize(array.array, value, array.size);
}


