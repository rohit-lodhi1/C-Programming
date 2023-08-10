void main()
{
  int a[]={4,5,4,7,8,8};
  int m,i,s=sizeof(a)/sizeof(int);
  m=a[0];
  clrscr();
  for(i=0;i<s;i++)
  {
     if(m<a[i])
     {
       m=a[i];
     }
  }
     printf("%d",m);
 getch();
}




