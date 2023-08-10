void main()
{
  int i,j,n=5,a=1;
  clrscr();
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=i*3;j++)
    {
      if(j<=i)
       printf("%d",j);
      if(j>=i)
       printf(" ");
    }

  for(j=1;j<=i;j++)
  {
    printf("%d",j<i?a++:a--);
    a=a;

  }
  printf("\n");
  }


getch();
}