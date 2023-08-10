void main()
{
  int i,j,n=5;
  clrscr();
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
	if(i+j<n/2 || j-i>n/2 || i-j>n/2 || i+j>=n+n/2)
	printf(" ");
	else
	printf("*");
     }
      printf("\n");
  }
   getch();

}