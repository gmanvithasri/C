int main()
{
    int i;
    int num;
    
    printf("Enter num: ");
    scanf("%d", &num);
    
    while(num>0)
    {
        printf("%d",i);
        i+=2;
        num=num-1;
    }
  
    return 0;
}
