#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <string.h>
#include <txlib.h>

FILE* LOGFILE = fopen("logfile.txt", "w");

#include "doc.h"

int main()
{
    stack stk =  {'\0'};
    stkconstructor(&stk, 2, PrintLongInt);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpush(&stk, 10);
    stkpush(&stk, 20);
    stkpush(&stk, 30);
    stkpush(&stk, 40);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);
    stkpop(&stk);

    stackdistructor(&stk);
    fclose (LOGFILE);

    FILE* textcode      = fopen("textcode.txt",      "r"); assert (textcode);
    FILE* numericalcode = fopen("numericalcode.txt", "w"); assert (numericalcode);

    translator(textcode, numericalcode);

    fclose(textcode);

    return 0;
}


