void translator(FILE* source, FILE* distance)
{
    char symbol = '\0';
    int numoflines = 0;
    while ((symbol = getc(source)) != EOF)
    {
        if (symbol == '\n')
        {
            numoflines ++;
        }
    }
    fseek(source, 0, SEEK_SET);
    for (int i = 0; i < numoflines-1; i++)
    {
        symbol = '\0';
        char command[5] = {'\0'};
        int k = 0;
        while (((symbol = getc(source)) != ' ') && (symbol != '\n'))
        {
            command[k] = symbol;
            k++;
        }
        if (strcmp(command, "push") == 0)
        {
            fprintf(distance, "1 ");
        }
        else if (strcmp(command, "pop") == 0)
        {
            fprintf(distance, "2 ");
        }
        else if (strcmp(command, "out") == 0)
        {
            fprintf(distance, "3 ");
        }
        else if (strcmp(command, "add") == 0)
        {
            fprintf(distance, "4\n");
            continue;
        }
        else if (strcmp(command, "sub") == 0)
        {
            fprintf(distance, "5\n");
            continue;
        }
        else if (strcmp(command, "mul") == 0)
        {
            fprintf(distance, "6\n");
            continue;
        }
        else if (strcmp(command, "div") == 0)
        {
            fprintf(distance, "7\n");
            continue;
        }
       else  if (strcmp(command, "sqrt") == 0)
        {
            fprintf(distance, "8\n");
            continue;
        }
        else if (strcmp(command, "hlt") == 0)
        {
            fprintf(distance, "-1\n");
            continue;
        }
        int num = 0;
        fscanf(source, "%d", &num);
        getc(source);
        fprintf(distance, "%d \n", num);
    }
    fprintf(distance, "\n");
    printf("TRANSLATION HAS BEEN COMPLETED \n");
}
