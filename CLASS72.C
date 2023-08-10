void main()
{
  int i,r=1,j,n=5;
  clrscr();
  for(i=1;i<=n;i++)
  {

     for(j=1;j<=i;j++)
     {
      printf("%d ",r++);
      if(r>n*2-1)
      r=1;

     }
      printf("\n");
  }
   getch();

}