void main()
{
  int i,j,n=5,r=1;
  clrscr();
  for(i=n;i>=1;i--)
  {
    r=n-i;
    for(j=1;j<=n-i;j++)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
       printf("%d ",++r);

    }
    printf("\n");
  }
 getch();
}