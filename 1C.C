void check(int pri,int sweet,int chair)
{
  int i=0,pc=chair+1;
  while(1)
  {
      if(pc==pri)
      {
	 pc=1;
       }
      else if(pc<pri)
      {
	pc++;
	sweet--;
      }
      if(sweet==0)
	break;

  }
  printf("%d",pc);
}

void main()
{
  int pri=4,sweet=6,chair=2;
  clrscr();
  check(pri,sweet,chair);
  getch();
}




/*int pow(int n,int pw)
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
int i,n;
while(n!=13)
{
 scanf("%d",&n);
 printf("%d",n);
}
getch();
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
*/