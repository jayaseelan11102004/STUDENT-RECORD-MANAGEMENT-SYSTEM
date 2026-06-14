#include<stdio.h>
#include<stdlib.h>
#include"option.c"
FILE*rf;
int rn=0;
void main(){

    rf=fopen("roll-number.txt","r+");
    rewind(rf);
    fscanf(rf,"%d",&rn);
    fclose(rf);
    option();

}
