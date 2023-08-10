void main()
{
  int i,j,n=5;
  clrscr();
  printf("\033[4m");
  for(i=0;i<=n/2;i++)
  {
    for(j=0;j<=n;j++)
    {
      if(i+j>=n/2 && j-i<=n/2)
      printf("*");
      else
      printf(" ");

    }
    printf("\n");

  }

	  getch();

}