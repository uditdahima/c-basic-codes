#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
   /* int i,j;
    for(i=1;i<=80;i+=6){
    for(j=1;j<=25;j+=2){
    gotoxy(i,j);
    printf("hello");
    }}*/
    gotoxy(27,13);
    printf("hello bht mehnat lgg gae");
    gotoxy(40,15);
    printf("namaste");
    getch();
}
