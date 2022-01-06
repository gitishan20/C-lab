#include<stdio.h>
/*Associativity of Operator */
int main()
{
    int a_84;
    int b_84 =4;
    int c_84 =8;
    int d_84 =2;
    int e_84 =4;
    int f_84 =2;
    a_84= b_84 +c_84/d_84+e_84*f_84;
     /* result without parentheses */
    printf("The value of a is = %d \n", a_84);
    a_84=(b_84+c_84)/d_84+e_84*f_84;
    /* result without parentheses */
    printf("The value of a is = %d \n", a_84);
    a_84=b_84+c_84/((d_84+e_84)*f_84);
    /* another result without parentheses */
    printf("The value of a is = %d\n", a_84);
    return 0;
                     
}