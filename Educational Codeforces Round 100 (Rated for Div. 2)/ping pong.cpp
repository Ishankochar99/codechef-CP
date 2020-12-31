#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
     long long x,y;
     cin>>x>>y;
   if(x==y){
    cout<<0<<" "<<1<<endl;
   }else if(y>x){
       if(x==1){
            cout<<0<<" "<<y-x+1<<endl;
       }else{
           cout<<1<<" "<<y-x+1<<endl;
        }
   }
   else{
   if(y==1){
    cout<<x-1<<" "<<1<<endl;
   }else{
   cout<<x-y<<" "<<1<<endl;
   }
   }

    }
}
