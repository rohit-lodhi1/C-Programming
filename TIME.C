void main()
{
int n=5000,hr=0,min=0,sec=0;

    sec=n%60;
    min=n/60;
    hr=min/60;
    min=min%60;


    printf("%d : %d : %d",hr,min,sec);
    getch();
    }