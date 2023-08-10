void main()
{
  int i,j,n=4,r;
  clrscr();
  for(i=n;i>=1;i--)
  {
   r=65;
   for(j=n-i;j>=1;j--)
   {
     printf(" ");
   }
   for(j=1;j<i*2;j++)
   {
     printf("%c",j<i?r++:r--);
   }
   printf("\n");

  }
  getch();
  }