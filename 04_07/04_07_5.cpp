#include<bits/stdc++.h>
using namespace std;

int find(string a,char x);

struct Student{
    string a,b;
    int c,d;
};

int main(){
    int n,index,sublen;string t;
    cin>>n;
    Student*x=new Student[n];
    for(int i=0;i<=n;i++){
        getline(cin,t);
        if(i==0){continue;}
        else{
           index=find(t,',');
           x[i-1].a=t.substr(0,index);
           sublen=x[i-1].a.length();
           t[index]=' ';
           index=find(t,',');
           x[i-1].b=t.substr(sublen+2,index-sublen-2);
           t[index]=' ';
           sublen=find(t,',');
           string xx=t.substr(index+2,sublen-index-1);
           string xxx=t.substr(sublen+2,t.length()-sublen-1);
           stringstream ss(xx);
           ss>>x[i-1].c;
           stringstream sss(xxx);sss>>x[i-1].d;
           //cout<<x[i-1].c<<" "<<x[i-1].d<<'\n';
        }
    }
    float max=x[0].c*x[0].d*1.05;string result=x[0].b;
    
    for(int i=1;i<n;i++){
        if((float)(x[i].d*x[i].c*1.05)>max){
            max=(float)(x[i].d*x[i].c*1.05);
            result=x[i].b;
        }
    }
    cout<<result;
}
int find(string a,char x){
	int index=-1;
	for(int i=0;i<(int)a.length();i++){
		if(a[i]==x){
			index=i;break;
		}
	}
	return index;
}