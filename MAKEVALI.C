void makeValid(char s[],int ind)
{
 int i;
 for(i=ind;s[i]!='\0';i++)
 {
   if(s[i]==' ' || s[i+1]==' ')
   {
     s[i]=' ';

   }
   }
 }
 void main()
 {
  char s[]="this is dollop   and its";
  int i;
  for(i=0;s[i]!=0;i++)
  {
       makeValid(s,i);
  }
  printf("%s",s);
  getch();
}
