void main()
{
  int i,j,n=3,r=1;
  clrscr();
   for(i=1;i<=n;i++)
   {

     for(j=1;j<i*2;j++)
     {

	 printf("%d ",r);
	 r=r+2;
	 if(j==n*2-1)
	 printf("%d ",r);
       }
      printf("\n");
     }
   getch();
}