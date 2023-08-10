int fact(int n)
{
  int a=n;
  if(n!=0)
  {

    n*(fact(n-1));

  }

}
void main()
{
  int n=4;
//  fact(4);
  printf("%d",fact(4));
  getch();
}