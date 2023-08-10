#include<stdio.h>
#include<conio.h>
void main()
{
int n=155,s=0,r;
clrscr();
L:
while(n!=0)
{
r=n%10;
n=n/10;
s=s+r;
}
if(s>9)
{
n=s;
s=0;
goto L;
}
printf("%d",s);
getch();
}