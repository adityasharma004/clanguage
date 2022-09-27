#include<stdio.h>
void main()
{
    int sum1=50+200;       //250(50+200)

    int sum2=sum1+150;     //400(250+150)

    int sum3=sum1+sum2;    //650(250+400)

    printf("%d\n%d\n%d\n",sum1,sum2,sum3);
    
}