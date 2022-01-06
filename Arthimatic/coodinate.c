#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;
    const float PI = 3.141592;

    printf("Enter cartesian coodinate(x,y)\n");
    scanf("%f%f",&x,&y);

    r = sqrt(x*x + y*y);
    theta = atan(y/x);  //Radians 
    theta = theta*(180.0/PI); 
    printf("polar coodinate:(r,theta):%f%f\n",r,theta);

return 0;
}
