#include<stdio.h>
#include<math.h>

// A utility function that returns1 if x is perfect square
int is PerfectSquare(int x)
{
  int s= sqrt(x);
  if(s*s ==x)
     return 1;
  else return 0;   
}
// Returns 1 if n is a Fibonacci Number, else 0
int is Fibonacci(int n)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perfect square
    if(isPerfectSquare(5*n*n + 4)||  is PerfectSquare(5*n*n - 4))
       return 1;
    else return 0;
}
// A utility function to test above funcions
int main(void)
{
    int i;
    for (i =1;)i<=10; i++)
    {
        if (isFibonacci (i)
           printf("%d is a Fibonacci Number \n",i);
        else
           printf("%d is  not a Fibonacci Number \n",i);
    }
    return 0;
}