# -CODESIMPLE
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("\nlargest number is:",a);
}
else if(b>c)
{
printf("\nlargest number is:",b);
}
else
{
printf("\nlargest number is:",c);
}
getch();
}
