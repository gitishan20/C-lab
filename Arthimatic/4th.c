#include<stdio.h>
/*Area and Perimeter of square*/
int main()

{
int s_84,area_84,perimeter_84;
printf("\nEnter side of square: ");
scanf("%d",&s_84);
area_84 = s_84*s_84;
perimeter_84 = s_84*4;
printf("\nArea of square  is %d: ",area_84);
printf("\nPerimeter of square is %d: ",perimeter_84);
return 0;
}