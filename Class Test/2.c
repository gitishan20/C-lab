#include <stdio.h>

/*function for triangle */
float triangle()
{
    float base_884, height_884;
    printf("enter the height of the triangle:");
    scanf("%f", &height_884);
    printf("enter the base of the triangle:");
    scanf("%f", &base_884);

    return (0.5 * base_884 * height_884);
}

/*function for rectangle*/
float rectangle()
{
    float breadth_884, length_884;
    printf("enter the length of the rectangle:");
    scanf("%f", &length_884);
    printf("enter the breadth of the rectangle:");
    scanf("%f", &breadth_884);

    return (length_884 * breadth_884);
}

/*function for circle*/
float circle()
{
    float radius_884;
    printf("enter the radius of the circle :\n");
    scanf("%f", &radius_884);

    return (3.141 * radius_884 * radius_884);
}

int main()
{

    float sum_884 = 0;
    sum_884 += triangle();
    sum_884 += rectangle();
    sum_884 += circle();

    printf("the total area would be %f\n", sum_884);
}