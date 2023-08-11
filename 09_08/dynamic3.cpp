

#include<bits/stdc++.h>
using namespace std;
void dynamic(vector<int>& arr,const vector<int>& input,int& result,vector<bool>& check);
int main(){
    int n,t,result=0;
   
    vector<int> arr;
    vector<int> input;
    vector<bool>check;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        input.push_back(t);
        check.push_back(false);
    }
    dynamic(arr,input,result,check);
    cout<<result;
}
void dynamic(vector<int>& arr,const vector<int>& input,int& result,vector<bool>& check){
    int s=0,len=input.size();
    
    if(arr.size()==input.size()){
        for(int i=0;i<(int)arr.size();i++){
            s+=(i+1)*arr[i];
        }
        result=max(s,result);
    }else{
        for(int i=0;i<len;i++){
        if(check[i]==false){
            arr.push_back(input[i]);check[i]=true;
            dynamic(arr,input,result,check);
            arr.pop_back();
        }
    }
    }
    
    
    
}