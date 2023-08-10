void main()
{
  int i,j,n=5,r;
  clrscr();
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
       if(i==j || j==n/2)
       printf("*");
       else
       printf(" ");

     }
     printf("\n");
  }
 getch();
}