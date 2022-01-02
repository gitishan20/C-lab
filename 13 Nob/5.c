#include <stdio.h>
#include <ctype.h>
int main()
{ int var1 = 'M';
int var2 = 'm';
if( isupper(var1))
{
printf("var1 1%c] is uppercase character\n", var1 );
}
else
{
printf("vari 1%cis not uppercase character\n", var1 );
}
return 0;
}