 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int n=454,r;
 while(n!=0)
 {
 r=n%10;
 n=n/10;
 if(r%2!=0)
 printf("the odd no is %d\n",r);
 }
 getch();
 }