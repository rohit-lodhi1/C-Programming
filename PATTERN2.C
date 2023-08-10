void main()
{
  int i,j,n=5;
  clrscr();
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(j==0 && i<n || i<=n/2 && i+j==n/2 || i>=n/2 && i>=n/2 || i>=n/2 && j<=n/2)
      printf("*");
      else
      printf(" ");

    }
    printf("\n");

  }

	  getch();

}