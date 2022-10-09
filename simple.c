#include<stdio.h>
int main()
{
    int m1,m2,m3;
    printf("enter the marks for englsih");
    scanf("%d",&m1);
     printf("\n enter the marks for maths");
    scanf("%d",&m2);
     printf("\n enter the marks for science");
    scanf("%d",&m3);
    float per=(m1+m2+m3)/3;
    printf("%.3f \n",per);
}
