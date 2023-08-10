void main()
{
int n=28,i,s=0;
for (i=1; i<=n/2;i++)
{
if(n%i==0)
s=s+i;
}
if (s==n)
printf("%d is perfect",n);
else
printf("%d is not perfect",n);
getch();
}