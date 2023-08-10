void main()
{
  int i,k,j,n=5;
  clrscr();
  for(i=0;i<=n;i++)
  {
    for(k=n-i;k>=1;k--)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("*");

    }
    printf("\n");

  }

	  getch();

}