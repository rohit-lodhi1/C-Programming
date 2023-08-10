void main()
{
   int i,j,a=1,n=18;
   clrscr();
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=2;j++)
     {
	if(i%2==0)
	printf("%d",a++);
	else if(j%2!=0)
	printf("%d",a++);



     }
       printf("\n");
   }
   getch();

}