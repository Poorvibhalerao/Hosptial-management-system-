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
