int main()
{
    int ch;
    char enteredUsername[20];
    char enteredPassword[10];
    while(1) {
    printf("Enter your username: ");
    scanf("%s", enteredUsername);

    printf("Enter your password: ");
    scanf("%s", enteredPassword);

    if (strcmp(correctUsername , enteredUsername) == 0 && (strcmp(correctPassword , enteredPassword) ==0))
    {
        printf("Login successful! Welcome, %s!\n\n", enteredUsername);
        printf("----------------WELCOME TO CIVIL HOSPITAL-------------------\n\n");
        while (1)
        {
            printf("press 1 for adding new patient\n");
            printf("press 2 for searching any patient record\n");
            printf("press 3 for booking appointments\n");
            printf("Press 4 for deleting the patient record\n");

            printf("Enter your choice\n");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                newpatient();
                break;
            case 2:
                search();
                break;
            case 3:
                newappointment();
                break;
            case 4:
                delete();
                break;

            default:
                printf("Enter valid choice\n");
                break;
            }
        }
    }
    else
    {
        printf("Incorrect username or password. Please try again.\n\n");
   
    }
    }

    return 0;
}
