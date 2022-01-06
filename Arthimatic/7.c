#include<stdio.h>
/* Second to minute*/
int main() 
{
    int a_84,s_84,h_84,m_84,t1_84;
    printf("Enter seconds value:\n");
    scanf("%d",&a_84);
    h_84 = a_84/3600;
    t1_84 = a_84%3600;
    m_84 = t1_84/60;
    s_84=t1_84%60;
    printf("%d Hours, %d minutes and %d seconds",h_84,m_84,s_84);
    return 0;
}
    