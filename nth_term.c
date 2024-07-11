#include <stdio.h>
int main()
{
    float a,d;
    int n;
    printf("Enter initial term (a1) : ");
    scanf("%f", &a);
    printf("Enter difference (d): ");
    scanf("%f", &d);
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    printf("The nth term = %.1f", a+(n-1)/d);
    return 0;
}
