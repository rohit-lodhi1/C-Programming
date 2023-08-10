int pow(int n,int pw)
{
int i,p=1;
for(i=1;i<=pw;i++)
{
  p=p*n;
}
return p;
}
int count(int n)
{
int c=0;
while(n!=0)
{
n=n/10;
c++;
}
return c;
}
void main()
{
int i,n=145;
for(i=2;i<=n/2;i++)
{
 if(n%i==0)
 printf("%d is not prime",n);
 break;
 }
  if(n%i!=0)
  printf("%d is prime",n);
  getch();
  }
