#include<iostream>
#include<map>
using namespace std;
map<int,int> arr;
int fibo(int a){
    if(arr.find(a)!=arr.end()){
        return arr[a];
    }int f;
    if(a<=2){
         f=1;
    }else{
         f=fibo(a-1)+fibo(a-2);
    }
    arr[a]=f;
    return f;
}
int main(){
    int a;
    cin>>a;
    cout<<fibo(a);
}