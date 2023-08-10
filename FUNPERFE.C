int isPerfect(int n)
{
int i,s=0;
for (i=1; i<=n/2;i++)
{
if(n%i==0)
s=s+i;
}
if (s==n)
 return 0;

  }
void main()
{
int n=28;
isPerfect(n);
if(isPerfect(0))
printf("%d is perfect no",n);
else
printf("%d is not perfect no",n);
getch();
}