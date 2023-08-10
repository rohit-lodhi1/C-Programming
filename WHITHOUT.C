void main()
{
  int i=1,j=5;
  clrscr();
  L:
  printf("%d\n",i*j);
  i++;

  if(i<=10)
  goto L;
  getch();

}