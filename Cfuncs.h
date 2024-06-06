#ifndef HEADER_FILE
#define HEADER_FILE


#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define ABS(a) ((a < 0) ? -1*(a) : a)

// Needed as there is some "inprecision" with floats in C
#define FLOAT_EQUAL(a, b) (ABS(a - b) <= 0.000001f)
#define DOUBLE_EQUAL(a, b) (ABS(a - b) <= 1e-12)

typedef int BOOL;

typedef struct {
    int* array;
    int size;
} SizedIntArray;

typedef struct {
    float* array;
    int size;
} SizedFloatArray;

typedef struct {
    double* array;
    int size;
} SizedDoubleArray;

typedef struct {
    char* array;
    int size;
} SizedCharArray;


typedef enum {
    T_INT,
    T_CHAR,
    T_FLOAT
} E_TYPE;

/*
    #define: defines "macros"
    Macros are replaced by there corresponding literal at compile time
    Can also be functions. Bare in mind they REPLACE text at compile time (i.e no type checking and unpredictability)
*/
#define TRUE 1
#define FALSE 0

BOOL intInSize(int* array, int value, int size);
BOOL floatInSize(float* array, float value, int size);
BOOL doubleInSize(double* array, double value, int size);
BOOL intIn(SizedIntArray array, int value);
BOOL floatIn(SizedFloatArray array, float value);
BOOL doubleIn(SizedDoubleArray array, double value);
BOOL charIn(SizedCharArray array, char value);

char** split(char* string, char delimiter);

#endif