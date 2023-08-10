void main()
{
   int i,j,a=1,r=1,n=5;
   clrscr();
   for(i=1;i<=n;i++)
   {
     a=1;
     for(j=1;j<=i+1;j++)
     {

	printf("%d",j>i?r:a++);

     }
       printf("\n");
   }
   getch();

}