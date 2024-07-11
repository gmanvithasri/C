int main()
{
    int num, multiplicator;
    int i;
    
    printf("Enter num: ");
    scanf("%d", &num);
    
    printf("Enter the multiplicator:");
    scanf("%d", &multiplicator);
    
    for(i=1;i<=multiplicator;i++)
    {
        printf("%d*d=%d\n", num,i,num*i);
    }
    
    return 0;
}
