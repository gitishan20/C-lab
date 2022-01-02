#include <stdio.h>

int main()
{
    int no, rem, temp, i, sum=0;  
    long fact;
    
    printf("Enter the number you want to check\n");
    scanf("%d",&no);
    
    
    temp = no;
    for(; temp>0; temp/=10)
    {
        rem = temp%10;
        fact = 1;
        for(i=1; i<=rem; i++)
            {
                fact *= i;
            }
            
        sum += fact;
    }
    
    if(sum==no)
    {
        printf("%d is a Strong number", no);
    }
    
    else
    {
        printf("%d is a not a Strong number", no);
    }
    
    return 0;
}