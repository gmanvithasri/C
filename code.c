#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter num1, num2, num3: \n");
    scanf("%d%d%d",&num1, &num2, &num3)
    
    if(num1>num2)
        if(num1>num3)
            return num1;
        else
            return num3;
    else if(num2>num3)
        return num2;
    else return num3;
}
int main()
{
    int max;
    max=maxBetween3();
    printf("Maximum=%d \n", max);
    return 0;
}
