int findKthMissing(int arr[],int n, int k){
    int index=0,int Missingcounter=0, counter=0;
    while(Missingcounter<k){
        if(arr[index]!=counter){
            Missingcounter++;
            if(Missingcounter==k)
            return counter;
        }
        else{
            index++;
        }
    }
    return -1;
}