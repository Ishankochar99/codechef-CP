#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long a,b,c,flag=0;
    cin>>a>>b>>c;
    long long sum=a+b+c;
    long long y=sum/9;
    if(a<y || b<y || c<y){
        flag=1;
    }

    if(sum%9==0 && flag==0){
        cout<<"YES"<<endl;
    }else{
    cout<<"NO"<<endl;
    }

}

}
