void selectionSort(char arr[], int n){
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
        }

        char temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
}

void printArray(char arr[], int n){
    for(int i=0;i<n;i++)
    printf("%c ",arr[i]);
}