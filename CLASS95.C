void main()
{
   int i,j,n=5,a=5;
   clrscr();
   for(i=1;i<=n;i++)
   {
     a=i;
     for(j=1;j<=i;j++)
     {
	printf("%d ",a);

       a=a+5;
     }


    printf("\n");

   }
  getch();

}