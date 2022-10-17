#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2;
    float dis;
    printf("enter the value x1 and y1\n");
    scanf("%d %d", &x1 , &y1);
    printf("enter the value of x2 ,y2\n");
    scanf("%d %d",&x2 ,&y2);
    dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("distance between two point is %2f",dis);
}