void main()
{
  int i,j,n=5;
  clrscr();
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
	if(j==0 && i<=n || i==j || i==n-1 && j<=n)
	printf("*");
	else
	printf(" ");

     }
      printf("\n");
     }
   getch();
}