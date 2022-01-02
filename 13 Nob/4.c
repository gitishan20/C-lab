#include<stdio.h>
int main()
{
    char s[]="Hello, world";
    printf(">>%s<<\n", s);
    printf(">>%20s<<\n", s);
    printf(">>%-20s<<\n", s);
    printf(">>%.4s<<\n", s);
    printf(">>%-20.4s<<\n", s);
    printf(">>%20.4s<<\n", s);
    return 0;




}