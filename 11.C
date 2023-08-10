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
int n=153,s=0,r,t=n;
while(n!=0)
{
r=n%10;
n=n/10;
s=s+fact(r);
}
if(s==t)
printf("%d is a strong no",s);
else
printf("%d is not a strong no",t);
getch();
}
