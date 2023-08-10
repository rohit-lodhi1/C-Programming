#include<stdio.h>
#include<conio.h>
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}
void main()
{
clrscr();
int n=143,s=0,r,t=n;
while(n!=0)
{
r=n%10;
n=n/10;
s=s+fact(r);
}
if(s==t)
printf("is a strong no %d",s);
else
printf("is not a strong no %d",t);
getch();
}
