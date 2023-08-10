void main()
{
  int i,r,j,n=4;
  clrscr();
  for(i=1;i<=n;i++)
  {
    r=i;
     for(j=1;j<=n;j++)
     {
       printf("%d",r++);
       if(r>n)
       r=1;
     }
      printf("\n");
  }
   getch();

}