#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int ktra(vector<vector<char>>,int a,int b);
int main(){
    int a,b;
    vector<vector<char>> caro;
    char t;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        vector<char> v1;
        for(int j=0;j<b;j++){
            
            cin>>t;
            v1.push_back(t);
        }
        caro.push_back(v1);
    }
    cout<<ktra(caro,a,b);
    
}
int ktra(vector<vector<char>>input,int a,int b){
    int dem=1,ifO=0,ifX=0;
    for(int i=0;i<a;i++){
        for(int j=1;j<b;j++){
            if(input[i][j]==input[i][j-1]){
                dem++;   
            }else{
                dem=1;
            }
            if(dem>=5){
                if(input[i][j-1]=='O'){ifO=1;}
                else if(input[i][j-1]=='X'){ifX=1;}
            }
        }
    }
    int t=min(a,b);
    if(t>=5){dem=1;
    for(int i=1;i<t;i++){
        for(int j=1;j<=i;j++){
            if(input[j][i-j]==input[j-1][i-j+1]){
                dem++;
            }else{
                dem=1;
            }
            if(dem>=5){
                if(input[i][j-1]=='O'){ifO=1;}
                else if(input[i][j-1]=='X'){ifX=1;}
            }
        }
    }
    if(t==a){
    for(int i=t;i<=2*(t-1);i++){
        for(int j=a-1;j>0;j--){
            if(i-j>=b-1){break;}
            if(input[j][i-j]==input[j-1][i-j+1]){
                dem++;
            }else{
                dem=1;
            }
            if(dem>=5){
                if(input[j][i-j]=='O'){ifO=1;}
                else if(input[j][i-j]=='X'){ifX=1;}
            }
        }
    }}
    else{
        for(int i=t;i<=2*(t-1);i++){
            for(int j=b-1;j>0;j--){
                if(i-j>=a-1){break;}
                if(input[i-j][j]==input[i-j+1][j-1]){
                    dem++;
                }else{
                    dem=1;
                }
                if(dem>=5){
                if(input[i-j][j]=='O'){ifO=1;}
                else if(input[i-j][j]=='X'){ifX=1;}
            }
            }
        }
    }
    }
    if(ifO==ifX){return 0;}
    else if(ifO==1){return 1;}
    else{return -1;}
}