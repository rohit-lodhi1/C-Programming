void main()
{
  int i,j,n=4;
  clrscr();
  for(i=1;i<=n;i++)
  {
   for(j=1;j<i*2;j++)
   {
     printf("*");
   }
   printf("\n");

  }

    for(i=n-1;i>=1;i--)
  {
   for(j=i*2-1;j>=1;j--)
   {
     printf("*");
   }
   printf("\n");

  }
   getch();
}