int getLast(char s[],int ind)
{
  int i=ind;
  while(1)
  {
    if(s[i+1]==' ' || s[i+1]=='\0')
     return i;

   i++;
   }
}


void revStr(char s[],int ind)
{
 int start=ind,last=getLast(s,ind),t;
 while(start<last)
 {
   t=s[start];
   s[start]=s[last];
   s[last]=t;
   start++;
   last--;
 }
}
void rev(char s[],int ind)
{
 int start=ind,last=strlen(s)-1,t;
 while(start<last)
 {
   t=s[start];
   s[start]=s[last];
   s[last]=t;
   start++;
   last--;
 }
}
void main()
{
 char s[]="hello hi dollop";
 int i;
 clrscr();
 rev(s,0);
 for(i=0;s[i]!=0;i++)
 {
    if(i==0 || s[i-1]==' ')
    {
     revStr(s,i);
    }
 }
 printf("%s",s);
 getch();
}
