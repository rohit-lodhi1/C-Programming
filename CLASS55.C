void main()
{
  int i,j,n=6;
  clrscr();
   for(i=1;i<n*2;i++)
   {

     for(j=1;j<=n*2;j++)
     {
	if(j-i>n-1 || i+j<n+2)
	 printf("*");
	else
	 printf(" ");

       }
      printf("\n");
     }
   getch();
}