void main()
{
  int i,j,n=5;
  clrscr();
  for(i=1;i<=n;i++)
  {
    for(j=n-i;j>=1;j--)
    {
      printf(" ");
    }
    for(j=i;j>=1;j--)
    {
     printf("%d ",i);

    }
    printf("\n");
  }

  getch();


}