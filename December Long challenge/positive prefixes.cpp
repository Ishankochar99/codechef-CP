#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   int n,k,sum=0;
   cin>>n>>k;
    long long arr[n+1];
  if(n==k){
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
  }
    else if(k<=n/2){
         for(int i=1;i<=2*k;){
        arr[i]=-i;
        i=i+2;
    }
    for(int j=2;j<=2*k;j){
        arr[j]=j;
        j=j+2;
    }
    for(int i=2*k+1;i<=n;i++){
        arr[i]=-i;
    }
    }
    else{
         for(int i=1;i<=2*(n-k)-1;){
        arr[i]=-i;
        i=i+2;
    }
    for(int i=2;i<=2*(n-k)-1;){
        arr[i]=i;
        i=i+2;
    }
    for(int i=2*(n-k);i<=n;i++){
        arr[i]=i;
    }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
}
