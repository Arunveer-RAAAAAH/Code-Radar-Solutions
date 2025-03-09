void selectionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int index=i;
        for(int j=0;j<=n-1;j++){
            if(arr[j]>arr[index])
            index=j
        }

        //swapping
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=arr[min];
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<=n-1;i++)
    printf("%d ",arr[i]);
}