void main()
{
int n=1100,year=0,month=0,weak=0,day=0;
     year=n/365;
     n=n%365;
     month=n/30;
     n=n%30;
     weak=n/7;
     n=n%7;
     day=n;
 printf("%dyr : %dmn : %dwk : %dday",year,month,weak,day);
 getch();
 }