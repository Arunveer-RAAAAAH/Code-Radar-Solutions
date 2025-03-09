void selectionSort(char arr[],int n){
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j][0]<arr[index][0]){
                index=j;
            }
        }
        while (arr[j][k] != '\0' && arr[j + 1][k] != '\0' && arr[j][k] == arr[j + 1][k]) {
                    k++;
                }
                if (arr[j][k] > arr[j + 1][k]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
    }
}

void printArray(){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}