#include <stdio.h>

int main()
{
    float celsius, fahrenheit , kelvin;
    printf("Enter temperature in\n ");
    scanf("%f", &celsius);
  
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius+273.15;

    printf("value of f= %f kelvin =%f", fahrenheit, kelvin);

    return 0;
}
