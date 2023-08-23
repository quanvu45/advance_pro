#include<bits/stdc++.h>
using namespace std;

void trying(int i,vector<int>& result,const int& n);
bool checking(const vector<int>& result);
void inkq(const vector<int>& result);
int main(){
    int n;
    cin>>n;
    vector<int> result(n*2,0);
    trying(0,result,n*2);
    return 0;
}

void trying(int i,vector<int>& result,const int& n){
    if(i==n ){
        if( checking(result)){
            inkq(result);
        }
    }else{
        for(int j=0;j<=1;j++){
            result[i]=j;
            trying(i+1,result,n);

        }
    }
}
bool checking(const vector<int>& result){
    int ngoacmo=0;
    for(auto it:result){
        if(it==0){
            ngoacmo++;
        }else{
            if(ngoacmo==0){
                return false;
            }
            ngoacmo--;
        }
    }
    if(ngoacmo==0){
        return true;
    }else{
        return false;
    }
}
void inkq(const vector<int>& result){
    for(auto it:result){
        if(it==0){
            cout<<'(';
        }else{
            cout<<')';
        }
    }
    cout<<endl;
}