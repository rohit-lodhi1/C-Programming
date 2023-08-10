int isPrime(int n)
{
int i;
for(i=2;i<n/2;i++)
{
   if(n%i==0)
   {
   return 0;
   }
   }
   return 1;
   }

void main()
{
int n=100,i;
clrscr();
for(i=1;i<=100;i++)
{
if(isPrime(i) && isPrime(n-i))
printf("%d+ %d->%d\n",i,n-i,n);
}
getch();
}
