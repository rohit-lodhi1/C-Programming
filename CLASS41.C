void main()
{
   int i,j,r=1,n=5,a=15;
   clrscr();
   for(i=1;i<=n;i++)
   {
     a=i+64;
     for(j=i;j>=1;j--)
     {
       printf("%c",a--);
     }
    printf("\n");
   }
     for(i=n-1;i>=1;i--)
   {
     a=i+64;
     for(j=i;j>=1;j--)
     {
       printf("%c",a--);
     }
    printf("\n");

}
  getch();
}