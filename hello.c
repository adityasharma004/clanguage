/*#include<stdalign.h>
int main()
{int a,b,c;
printf("enter two numers");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
}*/
#include<stdio.h>
void main()
{
         int m1,m2,m3,total;
         float per;
         
         printf("Enter 3 Nos.");
         scanf("%D%D%D",&m1,&m2,&m3);
         total=m1+m2+m3;
         per=total*100/300;
         if(per>=60&&per<=100)
                 printf("You are 1st :");
        else if(per>=50&&per<=60)
                 printf("You are 2nd");
        else if(per>=40&&per<=50)
                 printf("You are 3rd");
        else
                 printf("You are Fail");
}