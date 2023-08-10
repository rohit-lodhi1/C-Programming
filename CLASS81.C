void main()
{
   int i,j,a=1,t=1,n=5;
   clrscr();
   for(i=1;i<=n;i++)
   {

     for(j=1;j<=i;j++)
     {
	if(i%2!=0)
	printf("%d",a++);
	else
	{
	printf("%c",t+64);
	t++;
	}


     }
     printf("\n");
   }
   getch();

}