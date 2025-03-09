int findUnsortedSubarray(int arr[],int n){
    int counter=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                counter++;
            }
        }
    }
    return counter;
}