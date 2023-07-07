#include<iostream>
#include<cstring>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool ktra(vector<string>c,int n);
int main(){
    int n;
    vector<string> sum;
    cin>>n;
    for(int i=0;i<=n;i++){
        string t;
        getline(cin,t);
        transform(t.begin(),t.end(),t.begin(),::toupper);
        sum.push_back(t);
    }
   // cout<<sum[2];
    if(ktra(sum,n)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
bool ktra(vector<string>c,int n){
    for(int i=1;i<=n;i++){
        sort(c[i].begin(),c[i].end());
    }
    for(int i=1;i<=n-1;i++){
        if(c[i].compare(c[i+1])!=0){
            return false;
        }
    }
    return true;
}
