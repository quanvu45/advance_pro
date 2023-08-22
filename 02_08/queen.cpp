#include<bits/stdc++.h>
using namespace std;
void queen(vector<vector<bool>>& check,vector<vector<char>>& result,int n);
bool checkingvector2d(vector<vector<char>> result,int n);
void output(vector<vector<char>> result,int n);
int  main(){
    int n;
    cin>>n;
    vector<char> temp(n,'.');
    vector<vector<char>> result(n,temp);
    vector<bool> tempbool(n,false);
    vector<vector<bool>> check(n,tempbool);
    cout<<'[';
    queen(check,result,n);
    cout<<']';
}
void queen(vector<vector<bool>>& check,vector<vector<char>>& result,int n){
    if(checkingvector2d(result,n)){
        output(result,n);
        for(int i=0;i<n;i++){
            fill(result[i].begin(),result[i].end(),'.');
            fill(check[i].begin(),check[i].end(),false);
        }
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!check[i][j]){
                    check[i][j]='Q';
                    queen(check,result,n);
                }
            }
        }
    }
}
void output(vector<vector<char>> result,int n){
    cout<<'[';
    for(int i=0;i<n;i++){
        cout<<'"';
        for(auto it:result[i]){
            cout<<it;
        }
        if(i==n-1){
            cout<<'"'<<']';
        }else{
            cout<<'"'<<',';
        }
    }
}
bool checkingvector2d(vector<vector<char>> result,int n){
    int count =0;
    for(int i=0;i<n;i++){
        for(auto it:result[i]){
            if(it=='Q'){
                count++;
            }
        }
    }
    if(count==4){
        return true;
    }else{
        return false;
    }
}
