void main()
{
  int i,j,n=4;
  clrscr();
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%c",i+64);

    }
     printf("\n");

  }
  for(i=n-1;i>=1;i--)
  {
    for(j=i;j>=1;j--)
    {
      printf("%c",i+64);

    }
    printf("\n");

  }
	   getch();

}