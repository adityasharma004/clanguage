#include<stdio.h>
int main()
{
    float l,w,area,perimeter;
    scanf("%f %f",&l,&w);
    area=l*w;
    perimeter=2*(l+w);
    printf(" area of rectangle is : %.2f\n",area);
    printf(" perimeter of rectangle is : %.2f",perimeter);

}