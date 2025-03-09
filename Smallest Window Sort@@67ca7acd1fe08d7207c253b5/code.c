int findUnsortedSubarray(int arr[],int n){
    int leftIndex=0,rightIndex=n-1;

    while(leftIndex<n-1 && arr[leftIndex]<=arr[leftIndex+1])
    leftIndex++;

    while(rightIndex>0 && arr[rightIndex]>=arr[rightIndex-1])
    rightIndex--;

    return rightIndex;
}