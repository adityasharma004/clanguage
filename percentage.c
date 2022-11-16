#include<stdio.h>
int main()
{
    float maths,science,english,percentage;
    printf("\n enter marks of maths:"); 
    scanf("%f",& maths);
    printf("\n enter marks of science:");
    scanf("%f",&science);
    printf("\n enter marks of english:");
    scanf("%f",&english);
    percentage=(maths+english+science)/300*100;
    printf("\n percentage=%.2f",percentage);
    return 0;
}