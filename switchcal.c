main()
{
    while(1){
    int choice,a,b,sum;
    printf("\n\nSelect any option you want");
    printf("\n__________________________");
    printf("\n\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Odd or even");
    printf("\n4.Sum of n numbers");
    printf("\n5.Exit \n\t\t");
    scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\n\nEnter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Sum of %d and %d = %d",a,b,a+b);
            break;
        case 2:
            printf("\n\nEnter two numbers:");
            scanf("%d%d",&a,&b);
            printf("Subtraction of %d and %d = %d",a,b,a-b);
            break;
        case 3:
            printf("\n\n Enter the number:");
            scanf("%d",&a);
            a%2==0?printf("%d is a even number",a):printf("%d is a odd number",a);
            break;
        case 4:
            printf("\n\nEnter the number till which you need sum.");
            scanf("%d",&a);
            b=1;
            sum=0;
            while (b<=a){
                sum+=b;
                b++;
            }
            printf("sum of first %d numbers = %d",a,sum);
            break;
        case 5:
            exit(0);

        default:
            printf("\n\n\n\t\t\t\t\tINVALID INPUT");
        }
getch();
}
}
