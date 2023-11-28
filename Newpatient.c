void newpatient()
{
    // FILE *fp;
    printf("Enter the name of the patient\n ");
    fflush(stdin);
    gets(p.patient_name);
    char buff[20];
    sprintf(buff, "%s.txt", p.patient_name);
    fp = fopen(buff, "a");

    printf("Enter the full name of the patient:\n");
    fflush(stdin);
    gets(p.patient_name);

    printf("Enter the patient age:\n");
    fflush(stdin);
    scanf("%d", &p.patient_age);

    printf("Enter the patient gender(f/m):\n ");
    fflush(stdin);
    gets(p.gender);

    printf("Enter the patient address:\n ");
    fflush(stdin);
    gets(p.address);

    printf("Enter the patient disease:\n ");
    fflush(stdin);
    gets(p.disease);
    fprintf(fp, "Name= %s\n", p.patient_name);
    fprintf(fp, "Age= %d\n", p.patient_age);
    fprintf(fp, "Gender= %s\n", p.gender);
    fprintf(fp, "Address= %s\n", p.address);
    fprintf(fp, "Disease= %s\n", p.disease);
    printf("Patient added succesfully..\n\n");
    fclose(fp);
}
