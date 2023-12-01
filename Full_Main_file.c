
#include <stdio.h>
#include <string.h>

void newpatient();     //  adding new patient
void search();         // patient record
void newappointment(); // appointment scheduling
const char correctUsername[20] = "poorvi";
const char correctPassword[10] = "1234";
struct patient
{
    char patient_name[20];
    int patient_age;
    char address[50];
    char gender[2];
    char disease[20];
} p;
struct appointment
{
    char date[20]; // format dd/mm//yyyy
    char time[10]; // hr:min
} a;
FILE *fp;
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
void delete(){

char buff[20];
printf("enter the patient file name that you want to delete\n\n");
scanf("%s",buff);

if(remove(buff)==0){
    printf("the file is deleted successfully!!\n\n");
}
else{
    printf("There is no record available for this person\n\n");
}


}
