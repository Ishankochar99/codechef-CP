#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n==1){
            cout<<arr[0]<<endl;
        }else if(n==2){
        cout<<arr[1]<<endl;
        }else if(n==3){
        if(arr[2]>=arr[0]+arr[1]){
            cout<<arr[2]<<endl;
        }else{
            cout<<arr[1]+arr[0]<<endl;
        }
        }
        else if(n==4){
        cout<<min(max(arr[0]+arr[3],arr[1]+arr[2]),max(arr[0]+arr[1]+arr[2],arr[3]))<<endl;
        }
    }
}


