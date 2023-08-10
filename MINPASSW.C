void main()
{
   char s[10];
   int i;
   clrscr();
   for(i=0;i<10;i++)
   {
      s[i]=getch();
      if(i!=0)
      printf("\b*");
      printf("%c",s[i]);
   }
   printf("\n%s",s);
   getch();
}
