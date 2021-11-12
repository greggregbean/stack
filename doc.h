#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <string.h>
#include <txlib.h>

typedef long int datatype;

FILE* logfile = fopen("logfile.txt", "w");

typedef struct
{
    long long int stcan1;
    datatype* data;
    size_t size;
    size_t capacity;
    long long int stcan2;
} stack;

enum typesOfErrors
{
        NULL_POINTER_OF_STACK = -1,
        NULL_POINTER_OF_DATA = -2,
        WRONG_C1 = 1,
        WRONG_C2 = 2,
        WRONG_DC1 = 3,
        WRONG_DC2 = 4,
        WRONG_HASH = 5,
        WRONG_SIZE = 6
};

#include "verification.cpp"
#include "stconstructor.cpp"
#include "pushpop.cpp"
#include "translator.cpp"

int verificator(stack* stk, FILE* logfile);
void stkconstructor(stack* stk, int cp);
void stkpush(stack* stk, datatype val);
void stkresize(stack* stk, size_t val);
void stkpop(stack* stk);
void stackdump(int statusOfVerification, stack* stk, FILE* logfile);
void translator(FILE* source, FILE* distance);





