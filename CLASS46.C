void main()
{
  int i,r,j,n=6;
  clrscr();
  for(i=n;i>=1;i--)
  {
    r=1;
    for(j=1;j<=i*2;j++)
    {
       printf("%d",j<=i?j<i?r++:r:r--);


    }
    printf("\n");
  }
  getch();

}