void main()
{
  int i,r,j,n=5;
  clrscr();
  for(i=n;i>=1;i--)
  {
    r=65;
    for(j=1;j<i*2;j++)
    {

       printf("%c",j<i?r++:r--);


    }
    printf("\n");
  }
  getch();

}