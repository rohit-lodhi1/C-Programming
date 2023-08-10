void main()
{
   int i,j,t,n=5,a;
   clrscr();
   for(i=1;i<=n;i++)
   {
     t=1;
     a=1;
     for(j=1;j<i*2;j++)
     {
       printf("%d ",a);
	t=t+2;
	a=t+a;

     }

    printf("\n");

   }
  getch();

}