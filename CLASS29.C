void main()
{
   int i,j,a=1,n=5;
   clrscr();
   for(i=n;i>=1;i--)
   {
     a=n-i+1;
//    for(j=n-i;j>=1;j--)
  //  {
     //  printf(" ");
   // }
     for(j=1;j<i*2;j++)
     {
	  printf("%d",j<i?a++:a--);

     }


       printf("\n");
   }
   getch();

}