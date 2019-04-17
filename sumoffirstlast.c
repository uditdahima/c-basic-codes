//adding first and last digit of given number

main()
{
    int num,first,last,sum;
    printf("enter any number");
    scanf("%d",&num);
    last=num%10;
    printf("%d is the last digit \n ",last);
    first=num;
    do{
        first=first/10;
    }while(first>=10);

    printf("%d is the first digit \n",first);
    sum=first+last;
    printf("sum of first and last digit is %d",sum);
    getch();

}
