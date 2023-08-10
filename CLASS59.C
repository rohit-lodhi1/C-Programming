void main()
{
  int i,j,n=5;
  clrscr();
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=i;j++)
     {
       if(i%2!=0)
       printf("%d",j);
       else
       printf("%c",j+64);
     }
     printf("\n");
  }
 getch();


}