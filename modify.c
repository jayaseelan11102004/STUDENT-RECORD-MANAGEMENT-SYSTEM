//int cmp(char *,char *);
void modify(){

    char i,d,b;
    int ri,fl=0;
    char ni[20];
    system("cls");
    printf("\n\n\n");
    printf("\t\tMODIFY RECORD\n\n");
    printf("\t\tBASED ON NAME: n/N");
    printf("\n\n\t\tBASED ON REGISTER NO.: r/R");
    printf("\n\n\t\tENTER:");

    scanf(" %c",&i);

    if((i=='r')||(i=='R')){

        nd*tm=h;
        printf("\n\t\tENTER REGNO.:");
        scanf("%d",&ri);

        while(tm){

            if(tm->r==ri)
                break;
            tm=tm->nx1;
        }
        if(tm!=0){
            printf("\n\n\t\t\t%d\t%-30s\t\t%d\t\t",tm->r,tm->n,tm->p); //6.2%d
            printf("\n\n\t\tMODIFY:y/Y\t\t\tNO : n / N");
            printf("\n\n\t\tENTER:");
            scanf(" %c",&d);
            //printf("%c",d);
            if((d=='y')|(d=='Y')){
            printf("\n\n\t\tENTER NMAE:");
            scanf("%s",tm->n);
            printf("\n\n\t\tENTER PERCENTAGE:");
            scanf("%d",&tm->p);
            printf("\n\n\t\tMODIFIED SUCCESSFULLY");
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

        while(tm){

            if(cmp(tm->n,ni)){
                    printf("\n\n\t\t\t%d\t%-30s\t\t%d\t\t",tm->r,tm->n,tm->p); //6.2%d
                    fl=1;
                    //break;

            }
            tm=tm->nx1;
        }

        if(fl==1){
        tm=h;
        printf("\n\n\t\tENTER REGNO.:");
        scanf("%d",&ri);
            while(tm){

                if(tm->r==ri)
                    break;
                tm=tm->nx1;
            }
        if(tm!=0){
            printf("\n\n\t\t\t%d\t%-30s\t\t%d\t\t",tm->r,tm->n,tm->p); //6.2%d
            printf("\n\n\t\tMODIFY:y/Y\t\t\tNO : n / N");
            printf("\n\n\t\tENTER:");
            scanf(" %c",&d);
            //printf("%c",d);
            if((d=='y')|(d=='Y')){
            printf("\n\n\t\tENTER NMAE:");
            scanf("%s",tm->n);
            printf("\n\n\t\tENTER PERCENTAGE:");
            scanf("%d",&tm->p);
            printf("\n\n\t\tMODIFIED SUCCESSFULLY");
            }
        }
        else
            printf("\n\n\t\tNO RECORD");
        }
        else
            printf("\n\n\t\tNO RECORD");
     }

    printf("\n\n\n");
    printf("\t\tBACK : x / X");
    printf("\n\n\t\tENTER:");
    scanf(" %c",&b);
}
