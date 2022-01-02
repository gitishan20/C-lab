#include<stdio.h>
int sum_array(int a[],int);
// Function Prototype
int main()
{
    int a[100],n,i;
    printf("\n Enter how many number :");
    scanf("%d",&n);
    printf("\nEnter data for array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nThe sum of the elements of the array is %d",sum_array(a,n));
    return 0;
}
/*User defined function SUM-ARRAY*/
int sum_array(int a[],int n)
{int i,sum=0;
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
return sum;
}