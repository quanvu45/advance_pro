#include<bits/stdc++.h>
using namespace std;

void backtrackqueen(vector<int>&result,vector<bool>& column,vector<bool>& d1,vector<bool>& d2,int i,int n);
void c_out(vector<int>&result,int n);

int main(){
    int n;
    cin>>n;
    vector<bool> column(n+2,true);
    vector<bool> d1(2*n+2,true);
    vector<bool> d2(2*n+2,true);
    vector<int> result(n+2,0);
    cout<<'[';
    backtrackqueen(result,column,d1,d2,1,n);
    cout<<']';
    return 0;
}
void backtrackqueen(vector<int>&result,vector<bool>& column,vector<bool>& d1,vector<bool>& d2,int i,int n){
    for(int j=1;j<=n;j++){
        if(column[j] && d1[i-j+n] && d2[i+j-1]){
            result[i]=j;
            column[j]=false;d1[i-j+n]=false;d2[i+j-1]=false;
            if(i==n){
                c_out(result,n);
            }else{
                backtrackqueen(result,column,d1,d2,i+1,n);
            }
            column[j]=true;d1[i-j+n]=true;d2[i+j-1]=true;
        }
        
    }
}
void c_out(vector<int>&result,int n){
    cout<<'[';
    for(int i=1;i<=n;i++){
        cout<<'"';
        for(int j=1;j<=n;j++){
            if(result[i]==j){
                cout<<'Q';
            }else{
                cout<<'.';
            }
        }
        if(i==n){
            cout<<'"'<<']';
        }else{
            cout<<'"'<<',';
        }
    }
    
}