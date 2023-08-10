void main()
{
  int i,a=1,n1,n2,max,l;
  clrscr();
  printf("entre the no");
  scanf("%d %d",&n1,&n2);
  max=n1>n2?n1:n2;

  while(a)
  {
     if((max%n1==0)&&(max%n2==0))
     {
       l=max;
       printf("%d %d lcm is %d",n1,n2,l);
       break;
     }
    ++max;
 }
 getch();

}
