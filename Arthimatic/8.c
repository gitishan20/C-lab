#include<stdio.h>
/* Farenheit to Celcius*/
int main()
{
    float f_84,c_84;
    printf("Enter the value of Farenheit:\n");
    scanf("%f",&f_84);
    c_84 =((f_84-32)*5)/9;
    printf("Value is %f C",c_84);
    return 0;
}