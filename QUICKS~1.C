int partition(int arr[],int start,int end){
	int pivot = arr[end];
	int i=start-1,j=0,t;
       for(j=start;j<end;j++){
		if(arr[j]<pivot){


	      t = arr[++i];
		arr[i] = arr[j];
		arr[j]=t;
	}

}
 t = arr[++i];
arr[i]=pivot;
arr[end]=t;
return i;
}

void quickSort(int arr[],int start,int end){
	if(start<end){
		int pivot=partition(arr,start,end);
		quickSort(arr,start,pivot-1);
		quickSort(arr,pivot+1,end);
	}
}

int main()
{
	int a [] = {1,9,3,7,5},i=0;

	clrscr();
	for(i=0;i<sizeof(a)/2;i++)
	   printf("%d ",a[i]);

	quickSort(a,0,sizeof(a)2-1);
 puts();
	for(i=0;i<sizeof(a)/2;i++)
		printf("%d ",a[i]);

	getch();
}