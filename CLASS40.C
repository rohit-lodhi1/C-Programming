void main()
{
  int i,j,n=5,r;
  clrscr();
  for(i=1;i<=n;i++)
  {
   r=65;
   for(j=1;j<=i;j++)
   {
     printf("%c",r++);
   }
   printf("\n");

  }
    for(i=n-1;i>=1;i--)
  {
   r=65;
   for(j=1;j<=i;j++)
   {
     printf("%c",r++);
   }
   printf("\n");

  }
  getch();
  }