void main()
{
  int i,j,r,n=8;
  clrscr();
  for(i=0;i<n;i++)
  {  r=;
     for(j=0;j<=n;j++)
     {
	if(i+j<=n/2 || j-i>=n/2 || i-j>=n/2 || i+j>=n+n/2)
	printf("%d",j<i?r++:r--);
	else
	printf(" ");
     }
      printf("\n");
  }
   getch();

}