#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
   int n,i,c=0;
   cin>>n;
   if(n==1){
    cout<<0<<endl;
   }
   else{
    while(n>1){
            i=n/2;
        if(n%i==0 && i!=1){
            n=n/i;
        }else{
        n=n-1;
        }
        c++;
    }
    cout<<c<<endl;
   }
  }
}
