void main()
{
   int i,j,a,n=5;
   clrscr();
   for(i=1;i<=n;i++)
   {
     a=1;
     for(j=1;j<i*2;j++)
     {
	  printf("%d",j<i?a++:a--);

     }
       printf("\n");
   }
   getch();

}