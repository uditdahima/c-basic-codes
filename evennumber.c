main()
{
    int i,n,num;
    printf("enter the number:");
    scanf("%d",&n);
   /*while(i<=n)
    {
        printf("%d \n",i);
        i+=2;
    }*/
    /*for (i=1;i<=n;i+=2)
    {
        printf("\n %d",i);
    }*/
    for(i=1;i<=n;i++)
    {
        if(i%2==0){
            printf("\n %d",i);
        }
    }
    getch();




}
