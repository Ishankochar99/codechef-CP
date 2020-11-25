#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
int t;
cin>>t;
while(t--){
  int n,q;
  cin>>n>>q;
  string str;
  cin>>str;
  while(q--){
    int l,r;
    cin>>l>>r;
    if(n<=2){
      cout<<"NO"<<endl;
    }
    else{
      char c1,c2;
      c1=str[l-1];
      c2=str[r-1];
      int count=0;
      if(l>1){
        for(int i=0;i<l-1;i++){
          if(str[i]==c1){
            count++;
          }
        }
      }

     if(r<n){
       for(int i=r;i<n;i++){
         if(str[i]==c2){
           count++;
         }
       }
     }


    if(count!=0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

    }

  }


}
  return 0;
}
