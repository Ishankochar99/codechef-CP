#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    vector<int>v1,v2;
   long long n,d,ans1,ans2;
   cin>>n>>d;
   long long arr[n+1];
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<=9 || arr[i]>=80){
        v1.push_back(arr[i]);
    }else{
        v2.push_back(arr[i]);
    }
   }
   if(v1.size()%d==0){
    ans1=v1.size()/d;
   }else{
    ans1=v1.size()/d+1;
   }
   if(v2.size()%d==0){
    ans2=v2.size()/d;
   }else{
    ans2=v2.size()/d+1;
   }
   cout<<ans1+ans2<<endl;
}
}
