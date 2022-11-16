//to find the two number 
/*#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Please Enter Two different values\n");
 
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is Largest\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is Largest\n", num2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    return 0;
}*/
#include <stdio.h>

int main() {

 int n1, n2, n3;

  printf("Enter three different numbers:\n ");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1 >= n2 && n1 >= n3)
    printf("%dis the largest number.", n1);

  
  if (n2 >= n1 && n2 >= n3)
    printf("%d is the largest number.", n2);

 
  if (n3 >= n1 && n3 >= n2)
    printf("%d is the largest number.", n3);

  return 0;
}