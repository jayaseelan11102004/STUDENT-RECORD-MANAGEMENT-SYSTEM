#include"menu.c"
#include"add.c"
#include"list.c"
#include"delt.c"
#include"modify.c"
#include"save.c"
#include"deltall.c"
#include"sort.c"
#include"rev.c"
void option(){

    char op,e;
    int i=0;

    while(i==0){
    system("cls");
    menu();
    printf("\t\tENTER OPTION:");
    scanf(" %c",&op);
    switch(op){

    case 'a':
        add();
        break;
    case 'A':
        printf("A\n");
        add();
        break;
    case 'd':
        delt();
        break;
    case 'D':
        delt();
        break;
    case 's':
        list();
        break;
    case 'S':
        list();
        break;
    case 'm':
        modify();
        break;
    case 'M':
        modify();
        break;
    case 'v':
        save();
        break;
    case 'V':
        save();
        break;
    case 'l':
    case 'L':
        deltall();
        break;
    case 't':
    case 'T':
        sort();
        break;
    case 'r':
    case 'R':
        rev();
        break;
    case 'e':
        system("cls");
        printf("\n\n\t\tDO YOU WAND TO EXIT : e / E\n\n\t\tENTER:");
        scanf(" %c",&e);
        if((e=='e')|(e=='E'))
            i=1;
        break;
    case 'E':
        system("cls");
        printf("\n\n\t\tDO YOU WAND TO EXIT : e / E\n\n\t\tENTER:");
        scanf(" %c",&e);
        if((e=='e')|(e=='E'))
            i=1;
        break;
    }
    }


}
