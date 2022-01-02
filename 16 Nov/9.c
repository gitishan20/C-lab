#include<stdio.h>
void linear_search(int A[], int, int);
 int main()
{
   int array[100], search, c, n, position;
   // taking input in the array
    printf("Enter the number of elements in array\n");
   scanf("%d",&n);
    printf("Enter %d numbers\n", n);
    for ( c = 0 ; c < n ; c++ )
    {
      scanf("%d",&array[c]);
    }
      
   // taking input for the element to search
   printf("Enter the number to search\n");
   scanf("%d",&search);
 
 // function call for the search
   linear_search(array, n, search);
 
  /* if ( position == -1 )
      printf("%d is not present in array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
   return 0;*/
} 

void linear_search(int A[], int n, int find)
{
   int c;
    int Flag =0;
   for ( c = 0 ; c <= n ; c++ )
   {
      if ( A[c] == find )
      {
         printf ("\n %d is present in the location %d",find, (c+1));
         Flag = 1;
      }
   }
 if (Flag ==0)
 {
     printf(" The number %d is not present in the array", find);
 }
   
}