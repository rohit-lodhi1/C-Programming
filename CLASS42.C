void main()
{
  int i,j,n=5,r;
  clrscr();
  for(i=n;i>=1;i--)
  {

   for(j=1;j<=n-i;j++)
   {
     printf(" ");
   }
    r=i+64;
   for(j=i;j>=1;j--)
   {
     printf("%c ",r--);
   }
   printf("\n");

  }
  getch();
  }