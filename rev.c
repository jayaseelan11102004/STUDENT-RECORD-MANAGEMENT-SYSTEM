
void rev(){

    char i;
    system("cls");
    printf("\n\n\n");
    printf("\t\tLIST DATA\n\n");

     nd*tm=h;

     if(tm==0)
        printf("\n\t\tNO RECORD");
     else{
            printf("\n\t\t\t|---------------------------------------------------------------|\n");
            printf("\t\t\t| REG NO.| NAME                                         | MARK  |\n");
            printf("\t\t\t----------------------------------------------------------------\n");
        do{
            printf("\t\t\t| %d\t |%-30s\t\t| %d\t|\n",tm->r,tm->n,tm->p); //6.2%d
            tm=tm->nx1;
        }while(tm!=0);
     printf("\t\t\t|---------------------------------------------------------------|\n");
     }
        printf("\n\n\n");
        printf("\t\tBACK : x / X");
        printf("\n\n\t\tENTER:");
        scanf(" %c",&i);

}

