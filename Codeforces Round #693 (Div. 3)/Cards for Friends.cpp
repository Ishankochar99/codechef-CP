#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    int w,h,n,add=0,sum=0;
    cin>>w>>h>>n;
    if(n==1){
        cout<<"YES"<<endl;
    }
    else if(w%2==1 && h%2==1){
        cout<<"NO"<<endl;
    }
    else{
        add=h*w;
        int i=1;
        while(add%2==0){
            sum++;
            add=add/2;
            i++;
        }
        sum=pow(2,sum);
        if(sum>=n){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;
        }
    }
}
}
