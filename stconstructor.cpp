void stkconstructor(stack* stk, int capacity)
{
    printf("STACK CONSTRUCTOR: \n");
    printf("Capacity: %d\n", stk -> capacity);
    assert (stk != NULL);
    stk -> stcan1 = 0xDEADDEAD;
    assert((stk -> capacity = capacity) >= 0);
    stk -> size = 1;
    assert (((stk -> data = (datatype*) calloc(capacity + 2, sizeof(datatype)))) != NULL);
    stk -> data[0] = (datatype) 0xFEED;
    stk -> data[stk -> capacity + 1] = (datatype) 0xFEED;
    stk -> stcan2 = 0xDEADDEAD;

    printf("Stack canaries: \n");
    printf("First - %X", stk -> stcan1);
    printf("(%p) \n", &(stk -> stcan1));
    printf("Second - %X", stk -> stcan2);
    printf("(%p) \n", &(stk -> stcan2));

    printf("Data canaries: \n");
    printf("1st data canary - %X (%p) \n", stk -> data[0], &(stk -> data[0]));
    printf("2nd data canary - %X (%p) \n \n", stk -> data[stk -> capacity + 1], &(stk -> data[stk -> capacity+1]));

    verificator(stk, logfile);
}

void stackdistructor(stack* stk)
{
    assert(stk != NULL);
    assert(stk -> data != NULL);
    free(stk -> data);
    *stk = {'\0'};
    printf("STACK CLEARED \n\n");
}


