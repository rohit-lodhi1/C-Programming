void main()
{
   int i,j,a,n=4;
   clrscr();
   for(i=1;i<=n;i++)
   {
     a=1;
     for(j=1;j<i*2;j++)
     {
       if(j%2!=0)
       printf("%d",i);
       if(j%2==0)
       printf("*");
     }
       printf("\n");
   }
      for(i=n;i>=1;i--)
   {
     a=1;
     for(j=i*2-1;j>=1;j--)
     {
       if(j%2!=0)
       printf("%d",i);
       if(j%2==0)
       printf("*");
     }
     printf("\n");
     }
   getch();

}