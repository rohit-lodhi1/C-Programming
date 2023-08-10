void main()
{
   int i,j,r=1,n=5,a=15;
   clrscr();
   for(i=n;i>=1;i--)
   {
     for(j=1;j<=i;j++)
     {
       if(i%2!=0)
       printf("%d ",r++);
       else
       printf("%d",a--);
     }
    printf("\n");
   }
  getch();
}