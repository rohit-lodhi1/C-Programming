void main()
{
  int i,j,n=5;
  clrscr();
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d",i);

    }
     printf("\n");

  }
  for(i=n-1;i>=1;i--)
  {
    for(j=i;j>=1;j--)
    {
      printf("%d",i);

    }
    printf("\n");

  }
	   getch();


   getch();
}