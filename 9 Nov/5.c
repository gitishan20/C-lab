#include <stdio.h>
/* global variable declaration */
   int a_72 = 20;
   int main()
{ 
    /* local variable declaration in main function */
   int a_72 = 10;
   int b_72 = 20;
   int c_72 = 0;
   printf ("value of a in main() = %d\n", a_72);
   c_72 = sum(a_72, b_72);
   printf ("value of c in main() = %d\n", c_72);
return 0;
}
/* function to add two integers */
   int sum(int a_72, int b_72)
{ 
    printf ("value of a in sum() = %d\n", a_72);
    printf ("value of b in sum() = %d\n", b_72);
return a_72 + b_72;
}