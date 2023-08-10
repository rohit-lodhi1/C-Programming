void main()
{
  int i,j,n=5,t;
  clrscr();
  for(i=1;i<=n;i++)
  {
    t=65;
    for(j=1;j<i*2;j++)
    {
    printf("%c",j<i?t++:t--);

    }
     printf("\n");

  }
  getch();
}