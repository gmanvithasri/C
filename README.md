# Calculate-area-of-rectangle

#include <stdio.h>
int main()
{
    double height, width;
    printf("Enter the height of the rectangle in meter: ");
    scanf("%lf", &height);
    printf("Enter the width of the rectangle in meter: ");
    scanf("%lf", &width);
    double area = height*width;
    printf("Area of the rectangle in meter = %.1lf", area);
}
