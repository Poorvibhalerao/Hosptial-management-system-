void search()
{
    char file_name[50];
    printf("Enter the name of patient file you want to search:\n ");
    scanf("%s", file_name);
    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf("There is no data available for this person.....\n\n");
    }
    else
    {
        char ch = fgetc(fp);

        while (ch != EOF)
        {
            printf("%c", ch);

            ch = fgetc(fp);
        }
    }
    fclose(fp);
}
