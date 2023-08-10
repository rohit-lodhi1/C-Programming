void main()
{
   int i,j,a,n=5;
   clrscr();
   for(i=1;i<=n;i++)
   {

     for(j=1;j<=i;j++)
     {
	if(i%2==0 && j%2!=0 || i%2!=0 && j%2==0)
	printf("*");
	else
	printf("%d",j);



     }
     printf("\n");
   }
   getch();

}