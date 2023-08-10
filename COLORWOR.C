void lightPink()
{
//clrscr();
  printf("\033[1;31m");
}
void yellow()
{
//clrscr();
  printf("\033[1;33m");

}
void blue()
{
  printf("\033[1;34m");
}

void main()
{
clrscr();
 lightPink();
 printf("hello ");
 yellow();
 printf("world ");
 blue();
 printf("good morning");
 getch();


}
/*int count(char s[],char ch)
{
  int i,c=0,size=strlen(s);
  for(i=0;i<size;i++)
  {
     if(s[i]==ch)
     c++;

  }
  return c;
}


int isRep(char s[],char ch,char ind)
{
  int i;
  for(i=ind;i>=0;i--)
  {
    if(s[i]==ch)
    return 0;

  }
   return 1;
}
void main()
{
  char s[]="hello dollop";
  int i,c;
  clrscr();
  for(i=0;s[i]!=0;i++)
  {
     if(isRep(s,s[i],i-1)==1)
     {
      c=count(s,s[i]);
      printf("%c=%d\n",s[i],c);
     }
  }
   getch();
}
 */
/*void main()
{
  char s1[]="hello",s2[]="dollop",s3[]="info";
   int i,s=strlen(s1),l=strlen(s2);
   clrscr();
   for(i=0;s2[i]!=0;i++)
   {
       s1[s++]=s2[i];

   }


   for(i=0;s3[i]!=0;i++)
   {
       s1[s++]=s3[i];

   }

   printf("%s",s1);

 getch();
}  */