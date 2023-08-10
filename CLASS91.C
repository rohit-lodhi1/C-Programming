void main()
{
   int i,j,a=5,n=5;
   clrscr();
   for(i=n;i>=1;i--)
   {
    for(j=n-i;j>=1;j--)
    {
       printf(" ");
    }
     for(j=1;j<i*2;j++)
     {
	  printf("%d",j<i?a--:a++);

     }
    a=a-2;

       printf("\n");
   }
   getch();

}