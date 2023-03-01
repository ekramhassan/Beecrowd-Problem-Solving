#include<stdio.h>
int main ()
{
    int n,p;
    float h;
    double ts;
    scanf("%d %d %f",&n,&p,&h);
    ts=h*p;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",ts);

    return 0;
}
