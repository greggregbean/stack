void stkresize(stack* stk, double val)
{
        datatype oldc1 = stk -> data[0];
        datatype oldc2 = stk -> data[stk -> capacity + 1];
        stk -> capacity = stk -> capacity * val + 0.5;
        assert ((stk -> data = (datatype*)(realloc(stk-> data, (stk -> capacity + 2) * sizeof(datatype)))) != NULL);
        stk -> data[0] = oldc1;
        stk -> data[stk -> capacity + 1] = oldc2;
        verificator(stk, logfile);
}

void stkpush(stack* stk, datatype val)
{
    assert(stk != NULL);

    if (stk -> size > stk -> capacity)
    {
        stkresize(stk, 1.5);
        printf("RESIZE. Now the capacity of data: %d. \n", stk -> capacity);
        printf("Data canaries: \n");
        printf("1st data canary - %X (%p) \n", stk -> data[0], &(stk -> data[0]));
        printf("2nd data canary - %X (%p) \n", stk -> data[stk -> capacity + 1], &(stk -> data[stk -> capacity+1]));
    }

    stk -> data [stk -> size] = val;
    stk -> size++;
    verificator(stk, logfile);
    printstk(stk);
    printf("\n");
}

void stkpop(stack* stk)
{
    assert (stk != NULL);
    if(stk -> size == 1)
    {
        printf("You cannot pop from stack, size is 0. \n \n");
        return ;
    }
    if(stk -> size == 2)
    {
        printf("Now there is no elements in data. \n");
    }
    stk -> size --;
    verificator(stk, logfile);
    printstk(stk);
    printf("\n");
}
