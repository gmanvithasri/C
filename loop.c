#include <stdio.h>
int main()
{
    int i, j;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // i = 1,2,3
    {
        for (j = 1; j <= i; j++) // j = = 1, 2, 
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
