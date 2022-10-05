#include<stdio.h>
int main()
{
    float Basicsalary,DA=0.5,HRA=0.35;
    printf("enter the basic salary: ");
    scanf("%f",&Basicsalary);
    DA=Basicsalary*0.5;
    HRA=Basicsalary*0.35;
    float grossprofit=Basicsalary+DA+HRA;
    printf("%.2f",grossprofit);
}