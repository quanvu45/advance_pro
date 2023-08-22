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
         if(arr[0]>arr[(int)arr.size()-1]){
            s+=i*arr[(int)arr.size()-1];
            
            cout<<arr[(int)arr.size()-1]<<" ";arr.erase(arr.end()-1);
        }else{
            s+=i*arr[0];
           cout<<arr[0]<<" ";arr.erase(arr.begin());
        }
        i++;
    }
    cout<<s<<'\n';
    
}