void main()
{
  int i,a,j,n=5;
  clrscr();
   for(i=1;i<n*2;i++)
   {
     a=1;
     for(j=1;j<=n*2;j++)
     {
       if(j-i>n-1 || i+j<n+2)
	 printf("%d",j<n?a++:a--);
       else
	 printf(" ");


       }
      printf("\n");
     }
   getch();
}