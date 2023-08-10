void main()
{
   int i,j,r=1,n=5,a=15;
   clrscr();
   for(i=0;i<=n;i++)
   {
     a=i;
     for(j=0;j<=i*2;j++)
     {
       printf("%d",j<i?a--:a++);
     }
    printf("\n");
   }
  getch();
}