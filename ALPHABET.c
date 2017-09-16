#CODESIMPLE
#include<stdio.h>
#include<conio.h>
void main()
{
char alph;
scanf("%c",&alph);
clrscr();
if((alph>='a' && alph<='z') || (alph>='A' && alph<='Z'))
{
printf("\nalphabet");
}
else
{
printf("\nnot alphabet);
}
getch();
}
