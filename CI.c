#include<stdio.h>
#include<math.h>
void main(){
    float p,r,t,CI;
    scanf("%f %f %f",&p, &r, &t, &CI);
    CI=p*pow((1+r/100),t);
    printf("%.2f",CI);

}