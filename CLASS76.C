void main()
{
  int i,r=1,j,n=5;
  clrscr();
  for(i=1;i<=n;i++)
  {

     for(j=1;j<=i;j++)
     {
	printf("%d",r);
	if(r==1)
	{
	r--;
	}
	else
	if(r==0)
	r++;
     }
      printf("\n");
  }
   getch();

}