#include<stdio.h>
#include<conio.h>
void main()
{
int n=1111,s=0,r,t=n;
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