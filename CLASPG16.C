void main()
{
   int i,j,t=1,n=5,a=1;
   clrscr();
   for(i=1;i<=n;i++)
   {
    // t=1;
   //  a=1;
    for(j=1;j<=n-i;j++)
    {
       printf(" ");
    }
     for(j=1;j<i*2;j++)
     {
       printf(" %daf",a);
	t=t+2;
	a=t+a;

     }

    printf("\n");

   }
  getch();

}