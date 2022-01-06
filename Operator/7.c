#include<stdio.h>
int main()
{
   int h_84,m_84,s_84,h1,m1,s1,h2,m2,s2,day;
   printf("Enter first hours,minute and seconds\n");

   scanf("%d%d%d",&h1,&m1,&s1);
   printf("Enter second hours,minute and seconds\n");
   scanf("%d%d%d",&h2,&m2,&s2);
   s_84=h_84=m_84=day=0;
   s_84=s1+s2;
   if(s_84>60)
   {
       m_84=s_84/60;
       s_84=s_84%60;

   }
   m_84=m_84/60;+m1+m2;
   if(m_84>60)
   {
       h_84=m_84/60;
       m_84=m_84%60;
   }
   h_84=h_84/60;+h1+h2;
   if(h_84>24)
   {

    day=1;
    h_84=h_84%24;

   }
   printf("First time=%d:%d:%d",h1,m1,s1);
   printf("\n Second time =%d:%d:%d",h2,m2,s2);
   printf("\nAdded time =");
   if(day==0)
   printf("%d:%d:%d\n",h_84,m_84,s_84);
   else
   {
       printf("%d day",day);
       printf("%d:%d:%d\n",h_84,m_84,s_84);

   }
   return 0;


}

    