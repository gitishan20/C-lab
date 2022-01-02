#include <stdio.h>
int swap(int a,int b)
{
    int temp_923;
    temp_923 = a;
    a = b;
    b = temp_923;
    printf("swap of two number a = %d and b = %d",a,b);
    return a, b;
}

int main(){
    int a,b;
    printf("enter 2 number");
    scanf("%d%d",&a,&b);
    swap(a,b);
}