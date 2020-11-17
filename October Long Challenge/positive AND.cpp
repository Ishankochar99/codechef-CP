#include<bits/stdc++.h>
using namespace std;
bool ptwo (int x) {
    return x && (!(x&(x-1)));
}
int main(){
    long long t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
        if(n==1){
        cout<<1<<endl;
        continue;
        }
        if(ptwo(n)){
            cout<<-1<<endl;
        }
        else{
        long long arr[n+1];
            for(int i=1;i<=n;i++){
             arr[i]=i;
            }
            arr[1]=2;
            arr[2]=3;
            arr[3]=1;
            for(int i=4;i<=n;i++){
                if(ptwo(i)){
                    swap(arr[i],arr[i+1]);
                    i++;
                }
            }
            for(int i=1;i<=n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}
