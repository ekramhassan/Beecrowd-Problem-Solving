#include<stdio.h>
int main()
{
    char name[30];
    float sa;
    double total,se;
    gets(name);
    scanf("%f %lf",&sa,&se);
    total= sa + (se*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);


    return 0;
}
