void sort(){

    char c;
    int i;
    nd*tm=t;
    system("cls");
    printf("\n\n\n");
    printf("\t\tSORT LIST\n\n");
    printf("\t\tBASED ON NAME : n / N");
    printf("\n\n\t\tBASED ON MARK : m / M");
    printf("\n\n\t\tENTER : ");
    scanf(" %c",&c);

    if((c=='m')||(c=='M')){

            i=0;
            if(tm==0)
                printf("\n\t\tNO RECORD");
            else{
                    printf("\n\t\t\t|---------------------------------------------------------------|\n");
            printf("\t\t\t| REG NO.| NAME                                         | MARK  |\n");
            printf("\t\t\t----------------------------------------------------------------\n");
                    while(i<=100){
                            while(tm){
                            if(tm->p==i)
                                printf("\t\t\t| %d\t |%-30s\t\t| %d\t|\n",tm->r,tm->n,tm->p); //6.2%d
                            tm=tm->nx2;
                        }
                        tm=t;
                        ++i;
                    }
                    printf("\t\t\t|---------------------------------------------------------------|\n");

        }
    }

    if((c=='n')||(c=='N')){

            i=97;
            if(tm==0)
                printf("\n\t\tNO RECORD");
            else{
                    printf("\n\t\t\t|---------------------------------------------------------------|\n");
            printf("\t\t\t| REG NO.| NAME                                         | MARK  |\n");
            printf("\t\t\t----------------------------------------------------------------\n");
                    while(i<=122){
                            while(tm){
                            if(tm->n[0]==i)
                                printf("\t\t\t| %d\t |%-30s\t\t| %d\t|\n",tm->r,tm->n,tm->p); //6.2%d
                            tm=tm->nx2;
                        }
                        tm=t;
                        ++i;
                    }
                     printf("\t\t\t|---------------------------------------------------------------|\n");

        }
    }

    printf("\n\n\n");
    printf("\t\tBACK : x / X");
    printf("\n\n\t\tENTER:");
    scanf(" %c",&c);
}
