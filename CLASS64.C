void main()
{
  int i,j,n=4,r=n;
  clrscr();
  for(i=1;i<=n;i++)
  {
   r=i;
    for(j=1;j<i*2;j++)
    {
      printf("%d",j<i?r++:r--);
    }
    printf("\n");
  }
    getch();
}