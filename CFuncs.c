#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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


/**
 * Splits given input string into a list of pointers to words via given delimiter
 * 
 * @param string String to split
 * @param delimiter Character delimiter to split string by
 * @return Array of strings. Terminated with value NULL
*/
char** split(char* string, char delimiter) {
    // Find size, word count, delimiter count
    int i = 0;
    int size = 0;
    int delimiterCount = 0;
    while (string[i] != '\0') {
        // Disallow two contiguous delimiters
        // Disallow to count words at start and end with trailing delimiters
        if (string[i] == delimiter && string[i-1] != delimiter && size > 0 && string[i+1] != '\0') delimiterCount += 1; 
        i++;
        size += 1;
    }
    int wordCount = delimiterCount + 1;

    char** a = 0;
    printf("Found\n");
    printf("Word count: %d\n", wordCount);

    char* _word = malloc((size+1)*sizeof(char)); // Allocate space for individual words
    char** output = malloc((wordCount+1)*sizeof(char*)); // Allocate space for pointers to individual words
    output[wordCount] = NULL; // Point to null to signify end


    i = -1; //Start at -1 to allow for incrementation at start of loop
    int foundWords = 0;
    int ptr = 0;
    do {
        i++;

        // When found a delimiter...
        if ((string[i] == delimiter || string[i] == '\0')) {
            // Reset write pointer (ptr)
            // Add word to output list
            // Ensure that word actually contains text (otherwise its two contiguous delimiters)
            if (ptr != 0) {
                _word[ptr] = '\0';
                output[foundWords] = _word;
                _word = malloc(size*sizeof(char));
                foundWords++;
            }
            ptr = 0;
        }
        else {
            _word[ptr] = string[i];
            ptr++;
        }

    } while (string[i] != '\0');

    return output;
}
