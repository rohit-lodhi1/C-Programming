void main()
{
  int i,j,n=7;
  clrscr();
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
       if(i==0 && j<=n || i==n/2-1 && j==0 || i==n/2-1 && j==n-1 || i==n/2+1 && j==0 || i==n/2+1 && j==n-1 || i==n-1 && j<=n )
       printf("*");
       else
       printf(" ");

     }
     printf("\n");

  }

  getch();

}