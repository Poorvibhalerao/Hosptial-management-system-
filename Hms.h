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
