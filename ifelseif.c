main()
{
    int marks;
    printf("enter marks to know the grades - ");
    scanf("%d",&marks);
   /* if (marks>=90){
        printf("shabbash !!you got A grade");
    }
    else {
        if(90<marks>=80){
            printf(" bdiyaaa!! you got B grade");
        }
        else {
            if(80<marks>70){
                printf("thodi mehnat kro..you got C grade");
                        }
                        else{
                            printf("kaha dhayan hai tumhara!! you got D grade");
                        }
        }
    }*/
    if(marks>90)
        printf("grade-A");
    else if(marks>80)
        printf("grade-B");
    else if(marks>70)
        printf("grade-c");
    else
        printf("grade-d");
    getch();
}
