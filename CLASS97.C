void main()
{
   int i,j,n=3,a=1;
   clrscr();
   for(i=1;i<=n;i++)
   {
     a=i;
     for(j=1;j<=i;j++)
     {


	printf("@");
    //	else
      //	printf("%d",a);



     }
     printf("\n");
     for(j=1;j<=i;j++)
     {
     printf("#",a);
     }

    printf("\n");

   }
  getch();

}