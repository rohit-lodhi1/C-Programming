void main()
{
  char hex[5]="0000";
  const  char hexaDigit[]="0123456789abcdef";
  int r,c=3,n=100;
  clrscr();
  while(n!=0)
  {
     r=n%16;
     hex[c--]=hexaDigit[r];
     n=n/16;
  }
  printf("%s",hex);
  getch();
}