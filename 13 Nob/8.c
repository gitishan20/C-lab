#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "hello world"; 
    char s2[30];
    strcpy(s2,s1);
    puts(s2);
    return 0;
}