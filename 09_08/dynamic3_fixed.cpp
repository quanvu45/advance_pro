#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t,s=0,i=1;
    vector<int> arr;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>t;
        arr.push_back(t);
    }
    int len=a;
    while(i!=len+1){
        if(len==i){
            s+=arr[0]*i;
        }else{
            if(arr[0]>arr[(int)arr.size()]){
            s+=i*arr[(int)arr.size()];
            arr.erase(arr.end()-1);
        }else{
            s+=i*arr[0];
           arr.erase(arr.begin());
        }
        }
        i++;
    }cout<<s;
}