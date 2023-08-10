void main()
{
  int i,j,n=4,r=1;
  clrscr();
  for(i=1;i<=n;i++)
  {

    for(j=1;j<=n-i;j++)
    {
      printf(" ");
    }
     for(j=1;j<=i;j++)
     {
       printf("%d ",r++);

     }
     printf("\n");
  }
 getch();
}