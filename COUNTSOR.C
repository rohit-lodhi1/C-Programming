
int * dynamicArray(int size){
    int *a = (int *)malloc(sizeof(size+1));

    return a;
}

int maxSize(int *a){
int i=0,max=a[0];
    for(i=0;i<sizeof(a)/2;i++){
      if(max<a[i])
      max=a[i];
    }
    return max;
}

int countSort(int *a){
	int * newarr=dynamicArray(maxSize(a)),i=0,j=0,k=0,val;
	printf("%d ",sizeof(newarr));
	for(i=0;i<sizeof(newarr)/2;i++){
		newarr[i]=0;
	}

    for(j=0;j<sizeof(a)/2;j++){
	val=newarr[a[j]];
	newarr[a[j]]=val+1;
    }
    for(i=0;i<sizeof(newarr)/2;i++){
	if(newarr[j]>0){
	    printf("%d ",j);
	     val=newarr[j];
	     newarr[j]=val-1;
	}
    }
}

void main()
{
	int a[] ={1,2,4,9,3,5};
	clrscr();
   countSort(a);
   getch();
}