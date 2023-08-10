void main()
{
  int a[2][2]={1,2,3,4},b[2][2]={1,2,3,4},c[2][2]={1,2,3,4},mul[2][2],m[2][2];
  int i,j,k;
  clrscr();
  for(i=0;i<=1;i++)
  {
     for(j=0;j<=1;j++)
     {
       mul[i][j]=0;
       for(k=0;k<=1;k++)
       {
	  mul[i][j]+=a[i][k]*b[k][j];
       }
//       printf("%d ",mul[i][j]);
     }
//   printf("\n");
  }

  for(i=0;i<=1;i++)
  {
     for(j=0;j<=1;j++)
     {
       m[i][j]=0;
       for(k=0;k<=1;k++)
       {
	  m[i][j]+=mul[i][k]*c[k][j];
       }
       printf("%d ",m[i][j]);
     }
   printf("\n");
  }
   getch();
}