void main()
{
   int i,t=7,r=0,s=0,j,n=4,a=7;
   clrscr();
   for(i=1;i<=n;i++)
   {

     for(j=1;j<i*2;j++)
     {
	printf("%d",j<i*2?t++:a--);

     }

    s=s+a+a;
    t=s;
    printf("\n");

   }
  getch();

}