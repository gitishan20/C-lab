#include <stdio.h>
void swap(int,int);
int main()
{
    int a_84,b_84;
    printf("Enter values of a and b\n");
    scanf("%d%d",&a_84,&b_84);
    printf("\nBefore swaping:a=%d and b=%d\n",a_84,b_84);
    swap(a_84,b_84);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter swapping:a=%d and b=%d\n",x,y);
}