void save(){

    char b;
    FILE *ft=fopen("student-data.txt","r+");
    nd*tm=t;

    fseek(ft,0,2);
    while(tm!=0){
    fprintf(ft,"%d\t%s\t%d\t%d\n",tm->r,tm->n,tm->p,tm->l);
    tm=tm->nx2;
    }

    extern FILE*rf;
    rf=fopen("roll-number.txt","r+");
    extern int rn;
    rewind(rf);
    fprintf(rf,"%d",rn);
    fclose(rf);

    system("cls");
    printf("\n\n\n\n\t\tSAVED SUCCESSFULLY");
    printf("\n\n\n");
    printf("\t\tBACK : x / X");
    printf("\n\n\t\tENTER:");
    scanf(" %c",&b);

}



