#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
   long long a,b,evena=0,odda=0,evenb=0,oddb=0;
   cin>>a>>b;
   if(a%2==0){
    evena=a/2;
    odda=a/2;
   }
   else
   {
    evena=a/2;
    odda=a/2+1;
   }
   if(b%2==0){
    evenb=b/2;
    oddb=b/2;
   }else
   {
    evenb=b/2;
    oddb=b/2+1;
   }
   cout<<(evena*evenb)+(odda*oddb)<<endl;
}
}
