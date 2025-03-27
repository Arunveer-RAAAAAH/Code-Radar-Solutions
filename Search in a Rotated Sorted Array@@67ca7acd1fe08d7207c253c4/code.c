int searchInRotatedArray(int arr[],int n,int target){
    int low=0, high=n-1, mid;
    while(low<=high){
        mid=(low+high)/2;
    
        if(arr[mid]==target)
        return mid;

        if(arr[mid]<target)
        low=mid+1;

        if(arr[mid]>target)
        high=mid-1;
    }
    return -1;
}