void findUnsortedSubarray(int arr[],int n){
    int leftIndex,rightIndex;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1])
        leftIndex=i;
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]<arr[i-1])
        rightIndex=i;
    }
    for(int i=leftIndex;i<=rightIndex;i++){
        printf("%d",arr[i]);
    }
}