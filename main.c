#include <stdio.h>
#include "Cfuncs.h"
#include <string.h>

int main() {
    char a[] = " Hel    l o ";
    char* token;
    
    SizedCharArray testArray;
    testArray.array = a;
    testArray.size = 11;

    char** words = split(a, ' ');

    int i = 0;
    while (words[i] != NULL) {
        printf("Word: '%s'\n", words[i]);
        i++;
    }
}