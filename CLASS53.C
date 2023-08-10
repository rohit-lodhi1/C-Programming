void main()
{
   int i,j,n=3,r;
   clrscr();
   for(i=1;i<n*2;i++)
   {
     r=n;
     for(j=1;j<n*2;j++)
     {
       printf("%d",r);
      if(j<i)
      r--;
      if(j>n*2-i-1)
      r++;
      }
      printf("\n");
    }
  getch();

}