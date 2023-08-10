void valid(char s[],int ind)
{
   int i;
   for(i=ind;s[i]!='\0';i++)
   {
     s[i]=s[i+1];
   }
}
void main()
{
   char s[10];
   int i;
   clrscr();
   printf("Entre the number");
   scanf("%s",&s);
// s[10]='\0';
   for(i=0;s[i]!='\0';i++)
   {
     if(!(s[i]>=48 && s[i]<=57))
     {
       valid(s,i);
       i--;
     }
   }
     if(strlen(s)<10||strlen(s)>10)
     {
       printf("Invalid no.!\nTry again :)\n");
     }
   printf("%s",s);
   getch();
}