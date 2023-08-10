void main()
{
  int i,j,n=5;
  clrscr();
  for(i=n;i>=1;i--)
  {
     for(j=i;j>=1;j--)
     {
       printf("%d",n-i+j);
     }
     printf("\n");
  }
 getch();


}