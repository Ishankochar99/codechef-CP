#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    int n,one=0,two=0;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            one++;
        }else{
        two++;
        }
    }
    if(one%2==0 && two%2==0){
        cout<<"YES"<<endl;
    }else if(one%2==1){
    cout<<"NO"<<endl;
    }
     else if(two%2==1  && one==0){
    cout<<"NO"<<endl;
    }
    else if(one%2==0 && two%2==1){
            cout<<"YES"<<endl;
    }
   else{
    cout<<"YES"<<endl;
    }
}
}
