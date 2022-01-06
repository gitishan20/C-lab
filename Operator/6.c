#include<stdio.h>
/* Swap two number*/
int main()
{
   int a_84,b_84,temp;
   printf("\nEnter two integera and b:");
   scanf("%d%d",&a_84,&b_84);
   temp = a_84;
   a_84=b_84;
   b_84=temp;
   printf("\nAfter swaping a=%d and b=%d",a_84,b_84);
   return 0;

}