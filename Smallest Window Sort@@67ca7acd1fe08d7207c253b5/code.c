int findUnsortedSubarray(int arr[],n){
    int counter=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                counter++;
            }
        }
    }
    return counter;
}