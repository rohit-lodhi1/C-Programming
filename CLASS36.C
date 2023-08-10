void main()
{
  int i,j,n=4,r;
  clrscr();
  for(i=1;i<=n;i++)
  {
   r=1;
   for(j=1;j<i*2;j++)
   {
     printf("%d",j<i?r++:r--);
   }
   printf("\n");

  }

    for(i=n-1;i>=1;i--)
  {
   r=1;
   for(j=1;j<i*2;j++)
   {
     printf("%d",j<i?r++:r--);
   }
   printf("\n");

  }
   getch();
}