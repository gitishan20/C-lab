#include <stdio.h>
void main()
{
float y_917,x_917;
int n_917, count;
printf("Enter value of x_917 and n_917");
scanf ("%f%d",&x_917,&n_917);
y_917 = 1.0;
count = 1;
while (count <= n_917);
{
    y_917 = y_917 * x_917;
    count++;
}
printf("\nx_917 = %f; n_917 = %d; x_917 to power n_917 = %f\n", x_917,n_917 , y_917 );     

}