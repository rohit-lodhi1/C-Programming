void main()
{
int a[3][3]={1,2,3,4,5,6,7,8,9}, b[3][3]={1,2,3,4,5,6,7,8,9},c[3][3];
int  i,j;
clrscr();
for(i=0;i<3;i++);
{
  for(j=0;j<3;j++)
  {
    printf("%d ",a[i][j]);
   }
   printf("\n");
}
for(i=0;i<3;i++);
{
  for(j=0;j<3;j++)
  {
    printf("%d ",b[i][j]);
   }
   printf("\n");
}



for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  printf("%d ",c[i][j]);
      }
  printf("\n");
}
getch();
}