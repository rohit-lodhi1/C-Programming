void main()
{
   int i,j,r=1,n=5,a=15;
   clrscr();
   for(i=1;i<=n;i++)
   {
     a=i+64;
     for(j=1;j<i*2;j++)
     {
       printf("%c",j<i?a--:a++);
     }
    printf("\n");
   }
  getch();
}