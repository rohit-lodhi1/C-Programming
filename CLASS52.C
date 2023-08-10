void main()
{
   int i,j,n=5,r;
   clrscr();
   for(i=n;i>=1;i--)
   {
     for(j=n-i;j>=1;j--)
     {
       printf(" ");
     }
     for(j=i*2-1;j>=1;j--)
     {
	printf("*");

     }
      printf("\n");
    }

   for(i=2;i<=n;i++)
   {
     for(j=n-i;j>=1;j--)
     {
       printf(" ");
     }
     for(j=i*2-1;j>=1;j--)
     {
	printf("*");

     }
      printf("\n");
    }
  getch();

}