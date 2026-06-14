int cmp(char *,char *);
void delt(){

    char i,d,b;
    int ri,fl=0;
    char ni[20];
    system("cls");
    printf("\n\n\n");
    printf("\t\tDELETE RECORD\n\n");
    printf("\t\tBASED ON NAME: n/N");
    printf("\n\n\t\tBASED ON REGISTER NO.: r/R");
    printf("\n\n\t\tENTER:");
    scanf(" %c",&i);

    if((i=='r')||(i=='R')){
        nd*tm=h;
        printf("\n\n\t\tENTER REGNO.:");
        scanf("%d",&ri);

        while(tm){

            if(tm->r==ri)
                break;
            tm=tm->nx1;
        }
        if(tm!=0){
            printf("\n\n\t\t\t%d\t%-30s\t\t%d\t\t",tm->r,tm->n,tm->p); //6.2%d
            printf("\n\n\t\tDELETE : y / Y\t\t\tNO : n / N");
            printf("\n\n\t\tENTER:");
            scanf(" %c",&d);

            if((d=='y')||(d=='Y'))
            {
                if(tm==h)
                {
                    //printf("h");
                    h=tm->nx1;
                    tm->nx1->nx2=0;
                    free(tm);
                    printf("\n\n\t\t\tDELETE SUCCESSFULLY");
                }
                else if(tm->nx1==0){
                    //printf("t");
                    tm->nx2->nx1=0;
                    t=tm->nx2;
                    free(tm);
                    printf("\n\n\t\t\tDELETE SUCCESSFULLY");
                }
                else
                {
                    //printf("m");
                    tm->nx1->nx2=tm->nx2;
                    tm->nx2->nx1=tm->nx1;
                    free(tm);
                    printf("\n\n\t\t\tDELETE SUCCESSFULLY");
                }
            }

        }
        else{
            printf("\n\n\t\tNO RECORD");
        }
    }
     if((i=='n')||(i=='N')){

        nd*tm=h;
        printf("\n\t\t\t\t\t\t(small case letters)\n\t\tENTER NAME:");
        scanf("%s",ni);

        nd*ctm=tm;
        while(tm){

            if(cmp(tm->n,ni)){
                    printf("\n\n\t\t\t%d\t%-30s\t\t%d\t\t",tm->r,tm->n,tm->p); //6.2%d
                    fl=1;
                    //break;
            }
            tm=tm->nx1;
        }
        //if(fl==1)
        tm=ctm;
        if(fl!=0){
            printf("\n\n\t\tENTER REGNO.:");
            scanf("%d",&ri);
            tm=h;
            while(tm){

                if(tm->r==ri)
                    break;
                tm=tm->nx1;
            }
            printf("\n\n\t\t\t%d\t%-30s\t\t%d\t\t",tm->r,tm->n,tm->p); //6.2%d
            printf("\n\n\t\tDELETE : y / Y\t\t\tNO : n / N");
            printf("\n\n\t\tENTER:");
            scanf(" %c",&d);
            //printf("%c",d);
            if((d=='y')||(d=='Y')){
                if(tm==h)
                {
                    //printf("h");
                    h=tm->nx1;
                    tm->nx1->nx2=0;
                    free(tm);
                    printf("\n\n\t\t\tDELETE SUCCESSFULLY");
                }
                else if(tm->nx1==0){
                    //printf("t");
                    tm->nx2->nx1=0;
                    t=tm->nx2;
                    free(tm);
                    printf("\n\n\t\t\tDELETE SUCCESSFULLY");
                }
                else
                {
                    //printf("m");
                    tm->nx1->nx2=tm->nx2;
                    tm->nx2->nx1=tm->nx1;
                    free(tm);
                    printf("\n\n\t\t\tDELETE SUCCESSFULLY");
                }
            }
        }
        else
            printf("\n\n\t\tNO RECORD");
     }

    printf("\n\n\n");
    printf("\t\tBACK : x / X");
    printf("\n\n\t\tENTER:");
    scanf(" %c",&b);
}

int cmp(char * p1,char *p2){

    int i=0,a,b;

    while(*p2){
        if(*p2!=*p1)
            break;
        ++p1,++p2;
    }
    if((*p2==0)&&(*p1==*p2))
        return 1;
    else
        return 0;
}

