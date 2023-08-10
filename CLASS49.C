void main()
{
  int i,j,n=4,r;
  clrscr();
  for(i=1;i<=n;i++)
  {
   r=n*2+2-i;
   for(j=1;j<i*2;j++)
   {
     printf("%d",j<i?r++:r--);
   }
   printf("\n");

  }
  getch();
}