//write a programe in c to calculate the average of 5 number.


#include<stdio.h>
void main(){
    float a,b,c,d,e,avg;
    printf("enter the number\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("%f",avg);

}
