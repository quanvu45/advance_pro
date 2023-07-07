bool isprime(int z){
    if(z<=1){
        return false;
    }
    if(z<=3){
        return true;
    }
    if(z%2==0 || z%3==0){
        return false;
    }
    for(int i=5;i*i<=z;i+=6){
        if(z%i==0||z%(i+2)==0){
            return false;
        }
    }
    return true;
}
void outputPrime(int *a, int n) {
    for(int i=0;i<n;i++){
        if(isprime(*(a+i))==true){
            cout<<*(a+i)<<" ";
        }
    }
}