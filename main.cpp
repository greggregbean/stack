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
    stkconstructor(&stk, 2, PrintLongInt, PrintLongIntLogfile);


    fclose (LOGFILE);
    stackdistructor(&stk);

    return 0;
}



