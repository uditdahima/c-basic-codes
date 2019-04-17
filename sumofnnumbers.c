main()
{
    int i=1,n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("sum of all natural number till %d = %d",n,sum);
    getch();
}
