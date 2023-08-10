#include<stdio.h>
#include<conio.h>
int pow(int n,int pw)
{
int i,p=1;
for(i=1; i<=pw; i++)
{
p=p*n;
}
return p;
}
int countdigit(int n)
{
int c=0;
while(n!=0)
{
c++;
n=n/10;
}
return c;
}
void main()
{
int n=153,c,r,s=0,t=n;
clrscr();
c=countdigit(n);
while(n!=0)
{
r=n%10;
n=n/10;
s=s+pow(r,c);
}
if(t==s)
printf("%d is armstrong",t);
else
printf("%d is not armstrong",t);
getch();
}
