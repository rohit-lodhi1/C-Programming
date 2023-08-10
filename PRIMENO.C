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
int n=3;
clrscr();
isPrime(n);
printf("%d",isPrime(n));
getch();
}
