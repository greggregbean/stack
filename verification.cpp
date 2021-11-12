void printstk(stack* stk)
{
    assert(stk != NULL);
    printf("DATA: ");
    if(sizeof(datatype) == sizeof(int))
    {
        for (int num = 1; num < stk -> size; num++)
        {
            printf("%d ", stk -> data[num]);
        }
        printf("\n");
    }
    if(sizeof(datatype) == sizeof(double))
    {
        for (int num = 1; num < stk -> size; num++)
        {
            printf("%lg ", stk -> data[num]);
        }
        printf("\n");
    }
    if(sizeof(datatype) == sizeof(char))
    {
        for (int num = 1; num < stk -> size; num++)
        {
            printf("%c ", stk -> data[num]);
        }
        printf("\n");
    }
}

void stackdump(int statusOfVerification, stack* stk, FILE* logfile)
{
    switch (statusOfVerification)
    {
        case NULL_POINTER_OF_STACK:
            fprintf(logfile, "Error: WRONG POINTER OF STACK \n\n");
            break;
        case WRONG_C1:
            fprintf(logfile, "Error: WRONG STACK CANARY 1 \n\n");
            break;
        case WRONG_C2:
            fprintf(logfile, "Error: WRONG STACK CANARY 2 \n\n");
            break;
        case WRONG_DC1:
            fprintf(logfile, "Error: WRONG DATA CANARY 1 \n\n");
            break;
        case WRONG_DC2:
            fprintf(logfile, "Error: WRONG DATA CANARY 2 \n\n");
            break;
        case WRONG_HASH:
            fprintf(logfile, "Error: WRONG HASH \n\n");
            break;
        case WRONG_SIZE:
            fprintf(logfile, "Error: WRONG SIZE \n\n");
            break;
        default:
            fprintf(logfile, "NO ERRORS \n\n");
    }

    fprintf(logfile, "THE POINTER OF STACK: %p \n", stk);
    fprintf(logfile, "CAPACITY: %d \n", stk -> capacity);
    fprintf(logfile, "SIZE: %d \n", stk -> size);
    fprintf(logfile, "Stack canaries: \n");
    fprintf(logfile, "First - %X", stk -> stcan1);
    fprintf(logfile, "(%p); should be: DEADDEAD \n", &(stk -> stcan1));
    fprintf(logfile, "Second - %X", stk -> stcan2);
    fprintf(logfile, "(%p);  should be: DEADDEAD \n \n", &(stk -> stcan2));

    fprintf(logfile, "Data canaries: \n");
    fprintf(logfile, "1st data canary - %X (%p); Should be: FEED\n", stk -> data[0], &(stk -> data[0]));
    fprintf(logfile, "2nd data canary - %X (%p); Should be: FEED\n \n", stk -> data[stk -> capacity + 1], &(stk -> data[stk -> capacity+1]));

    fprintf(logfile, "DATA: ");
    for (int num = 1; num < stk -> size; num++)
    {
        fprintf(logfile, "%lg ", stk -> data[num]);
    }
}

int verificator(stack* stk, FILE* logfile)
{
    int statusOfVerification = 0;

     if (stk == NULL)
     {
        statusOfVerification = NULL_POINTER_OF_STACK;
        printf ("There is a mistake on this stage. (Check logfile)\n");
        stackdump(statusOfVerification, stk, logfile);
        exit(0);
     }

     if (stk -> data == NULL)
     {
        statusOfVerification = NULL_POINTER_OF_DATA;
        printf ("There is a mistake on this stage. (Check logfile)\n");
        stackdump(statusOfVerification, stk, logfile);
        exit(0);
     }

     else if (stk -> stcan1 != 0xDEADDEAD)
     {
        statusOfVerification = WRONG_C1;
        printf ("There is a mistake on this stage. (Check logfile)\n");
        stackdump(statusOfVerification, stk, logfile);
        exit(0);
     }

     else if (stk -> stcan2 != 0xDEADDEAD)
     {
        statusOfVerification = WRONG_C2;
        printf ("There is a mistake on this stage. (Check logfile)\n");
        stackdump(statusOfVerification, stk, logfile);
        exit(0);
     }

     else if (stk -> data[0] != (datatype) 0xFEED)
     {
        statusOfVerification = WRONG_DC1;
        printf ("There is a mistake on this stage. (Check logfile)\n");
        stackdump(statusOfVerification, stk, logfile);
        exit(0);
     }

     else if (stk -> data[stk -> capacity + 1] != (datatype) 0xFEED)
     {
        statusOfVerification = WRONG_DC2;
        printf ("There is a mistake on this stage. (Check logfile)\n");
        stackdump(statusOfVerification, stk, logfile);
        exit(0);
     }

     else if ((stk -> size > stk -> capacity + 1) || (stk -> size < 0))
     {
        statusOfVerification = WRONG_SIZE;
        printf ("There is a mistake on this stage. (Check logfile)\n");
        stackdump(statusOfVerification, stk, logfile);
        exit(0);
     }
}
