# -CODESIMPLE
#include<stdio.h>
#include<conio.h>
void main()
{
int year;
scanf("%d",&year);
clrscr();
if(year%4==0||year%400==0)
{
printf("\nleap year");
}
else
{
printf("\nnon-leap year");
}
getch();
}
