  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int n=345,s=0,r;
  while(n!=0)
  {
  r=n%10;
  n=n/10;
  s=s*10+r;
  }
  printf("%d",s);
  getch();
  }