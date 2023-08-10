void main()
{
   int i,j,a,n=7;
   clrscr();
   for(i=0;i<n;i++)
   {
     a=1;
     for(j=0;j<n;j++)
     {
	 if(i==j)
	  printf("*");
	 else
	  printf("0");
     }
       printf("\n");
   }
   getch();

}