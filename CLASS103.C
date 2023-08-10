void main()
{
   int i,j,n=6,a;
   clrscr();
   for(i=1;i<=n;i++)
   {
     a=65;
     for(j=1;j<i*2;j++)
     {
       printf("%c",j<i?a++:a--);
     }
    printf("\n");
   }
     for(i=n-1;i>=1;i--)
   {
     a=65;
     for(j=1;j<i*2;j++)
     {
       printf("%c",j<i?a++:a--);
     }
    printf("\n");
   }
  getch();
}