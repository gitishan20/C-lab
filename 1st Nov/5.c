#include <stdio.h>

int SUM_ARRAY(int a_884[],int n_884)
{
    int i_884, sum_884 = 0;
    for (i_884 = 0; i_884 < n_884; i_884++)
    {
        sum_884 = sum_884 + a_884[i_884];
    }
    return sum_884;
}

int main()
{
    int a_884[100],n_884,i_884;
    printf("\nEnter how many numbers:");
    scanf("%d",&n_884);
    printf("\nEnter data for array:");
    for (i_884 = 0; i_884 < n_884; i_884++)
    {
        scanf("%d",&a_884[i_884]);
    }
    printf("\nThe sum of the elements of the array is %d",SUM_ARRAY(a_884,n_884));
    return 0;
}