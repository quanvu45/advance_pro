#include<bits/stdc++.h>
using namespace std;
void caculat(int total,vector<int>& arr,const vector<int>& input,int& result);
int main(){
    int t,n,total,result=-1;
    cin>>n>>total;
    vector<int> input,arr;
    for(int i=0;i<n;i++){
        cin>>t;
        input.push_back(t);
    }
    caculat(total,arr,input,result);
    cout<<result;
}
void caculat(int total,vector<int>& arr,const vector<int>& input,int& result){
    int s=0,len=arr.size();
    for(auto it:arr){
        s+=it;
    }
    if(s==total && result<0){
        result=0;result++;
    }else if(s==total && result>0){
        result++;
    }else{
        int i=0;
        while(s+input[i]<total){
            arr.push_back(input[i]);
            caculat(total,arr,input,result);
            arr.pop_back();
            i++;
        } 
    }
    

}