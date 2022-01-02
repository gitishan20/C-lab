#include<stdio.h>
int fib(int);
int main()
{
    int n_84;
    printf("\nEnter term number: ");
    scanf("%d",&n_84);
    printf("\nThe value of the term-%d of Fibonacci sequence is %d", n_84,fib(n_84));
    return 0;
}

//User defined interactive function fib that returns the value of ith term of fibonacci sequence
int fib(int n_84)
{
    int i,f1=0,f2=1,f;
    if(n_84==0 || n_84==1) 
    return n_84;
   
else
   {
    for(i=1;i<n_84-2;i++)
    {
        f=f1+f2;f1=f2;f2=f;
    }
    return f;
    
   }
}