int isPrime(int n)
{
int i,f=1;
for(i=2;i<=n/2;i++)
{
  if(n%i==0)
  {
  f=0;
  return 0;
  }
  }
  if(f==1);
  return 1;
  }

void main()
{
int n=100,i;
for(i=2;i<=100;i++)
if(isPrime(i))
printf("%d->%d\n ",i,n);
getch();
}