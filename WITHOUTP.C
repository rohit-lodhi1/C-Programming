void main()
{
   int i,s;
   char far *a=0xb8000002;
   clrscr();
   *a='l';
   *(a+2)='s';
//   *a='t';
   getch();
}
