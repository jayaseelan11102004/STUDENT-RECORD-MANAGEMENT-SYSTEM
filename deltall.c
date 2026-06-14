void deltall(){

    char c;
    int rn=0;
    extern FILE*rf;
    system("cls");
    printf("\n\n\n");
    printf("\n\n\t\t\tDO YOU WANT DELETE ALL RECORD IN THE FILE\n\n\t\t\tYES : y /Y\t\t\tNO : n / N\n\n\t\t\tENTER :");
    scanf(" %c",&c);
    if((c=='y')||(c=='Y')){

        rf=fopen("student-data.txt","w");
        fclose(rf);
        rf=fopen("roll-number.txt","r+");
        rewind(rf);
        fprintf(rf,"%d",rn);
        fclose(rf);
        printf("\n\n\t\t\tDELETE SUCCESSFULLY");
    }

    printf("\n\n\n");
    printf("\t\tBACK : x / X");
    printf("\n\n\t\tENTER:");
    scanf(" %c",&c);
}
