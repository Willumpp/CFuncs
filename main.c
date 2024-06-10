#include <stdio.h>
#include "Cfuncs.h"
#include <string.h>

int main() {
    char a[] = " Hel    l o ";
    char phrase[] = "";
    char* token;
    
    SizedCharArray testArray;
    testArray.array = a;
    testArray.size = 11;

    printf("Phrase '%s' in pos %d\n", phrase, find(a, phrase));
}