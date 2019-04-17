#include<stdio.h>; //for printf and scanf
#include<conio.h>; // for clrscr
void add ()
{
    double a,b,sum;
    printf("Enter two numbers:");
    scanf("%2f%2f",&a,&b);
    sum= a+b;
    printf("the sum of %2f & %2f = %2f",a,b,sum);
}
void add(void);
main(){
    add();
    getch();
}
