void deleteChar(char s[],int ind)
{
 int i;
 for(i=ind;s[i]!='\0';i++)
 {
    s[i]=s[i+1];
 }
}
void main()
{
 char s[]="hello dollop",ch='l';
 int i;
 printf("%s\n",s);
 for(i=0;s[i]!='\0';i++)
 {
   if(ch==s[i])
   {
     deleteChar(s,i);
     i--;
   }
 }
 printf("%s",s);
 getch();
}