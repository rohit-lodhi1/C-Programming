void main()
{
  int i,r=1,j,n=3;
  clrscr();
  for(i=1;i<=n;i++)
  {
     r=i;
     for(j=1;j<=n+1;j++)
     {
	printf("%d",i%2!=0?j<=i?r:2+r:r);



     }
      printf("\n");
  }
   getch();

}