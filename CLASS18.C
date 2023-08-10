void main()
{
  int i,j,n=5,r;
  clrscr();
  for(i=1;i<=n;i++)
  {
    r=1;
    for(j=n-i+1;j>=1;j--)
    {
      printf("%d",i<=j?r++:r--);

    }
     printf("\n");

  }
  getch();
}