int isPrime(int n){
    if(n<0)
    return 0;
    else{
        int flag=1;
        for(int i=2;i*i<n;i++){
            if(n%i==0)
            flag=0;
        }
        if(flag)
        return 1;
        else
        return 0;
    }
}