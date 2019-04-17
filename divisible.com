main()
{
    int x,a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    x=a%b==0?printf("yes it is divisible"):printf("no it is not divisible");
    //printf("%d",x);
    getch();
}
