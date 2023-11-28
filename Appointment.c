void newappointment()
{
    char buff[20];
    printf("Enter the name of the patient\n ");
    fflush(stdin);
    gets(p.patient_name);
    sprintf(buff, "%s.txt", p.patient_name);
    fp = fopen(buff, "r");
    if (fp == NULL)
    {
        printf("First please add the patient!!!!!!\n\n");
    }

    else
    {
        fp = fopen(buff, "a");
        printf("Enter date(dd/mm//yyyy):\n");
        fflush(stdin);
        scanf("%s", a.date);
        printf("Enter the time(hh:mm):\n");
        fflush(stdin);
        gets(a.time);
        fprintf(fp, "-----APPOINTMENT-----\n");
        fprintf(fp, "Appointment date is %s\n", a.date);
        fprintf(fp, "Appointment time is %s\n", a.time);
    }
    fclose(fp);
}
