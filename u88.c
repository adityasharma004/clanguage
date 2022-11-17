#include<stdio.h>
void main(){
    int x = 10,m,n;
    m=x++;
    n=++x;
    printf("m=%d n=%d x=%d",m,n,x);
}