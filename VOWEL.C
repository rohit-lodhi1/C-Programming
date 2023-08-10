#include<stdio.h>
#include<conio.h>
int main()
{
char c;
clrscr();
printf("enter any character");
scanf("%c",&c);
if(c=='a' || c=='e' || c=='i'|| c=='o'|| c=='u')
{
printf("the character is vowel %c",c);
}
else
printf("the character is constant %c",c);
getch();
}