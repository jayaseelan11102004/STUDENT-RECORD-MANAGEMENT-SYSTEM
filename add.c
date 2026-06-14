
typedef struct node{

    unsigned int r;
    char n[30];
    unsigned int l;
    unsigned int p;
    struct node* nx1;
    struct node* nx2;
}nd;

extern int rn;
nd*h=0;
nd*t=0;
void add(){

        char nm[20],fl;
        int prt;
        nd*tm;
        a1:
        char *npt=nm;
        int i=0;
        system("cls");
        printf("\n\n\n");
        printf("\t\tADD DATA\t\t\t\t(small case letters)\n\n");
        printf("\t\tenter name :");
        scanf("%s",nm);
        printf("\n\n\t\tenter percentage :");
        scanf("%d",&prt);
         tm=(nd *)malloc(sizeof(nd));

        while(*npt)
        tm->n[i++]=*npt++;

        tm->n[i]=0;

        tm->l=i;

        tm->r=++rn;
        tm->p=prt;
        if(h==0){
            tm->nx1=0;
            tm->nx2=0;
            t=tm;
        }
        else{
        tm->nx1=h;
        tm->nx2=0;
        h->nx2=tm;
        }

        h=tm;

        printf("\n\n\t\tADD MORE\n\n\t\tYES:Y/y\t\t\t\t\tBACK:n/N\n\n\t\tENTER:");
        scanf(" %c",&fl);
        if((fl=='y')||(fl=='Y'))
            goto a1;

}
