#include<bits/stdc++.h>
using namespace std;

void moving(int n,int a,int b,int c,int&count);

int main(){
    int n,count=0;
    cin>>n;
    moving(n,1,3,2,count);
    return 0;
}

void moving(int n,int a,int b,int c,int&count){
    if(n==1){
        cout<<1<<" "<<a<<" "<<b<<endl;count++;
        return;
    }
    moving(n-1,a,c,b,count);
    cout<<n<<" "<<a<<" "<<b<<endl;count++;
    moving(n-1,c,b,a,count);
}