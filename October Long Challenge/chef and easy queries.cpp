#include <iostream>
#include<queue>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,k,c=1,flag=0;
        cin>>n>>k;
        long long * arr=new long long[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0,m=k;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum<m){
                cout<<c<<endl;
                flag=1;
                break;
            }else{
            c=c+1;
            m=m+k;
            }
        }
        long long y=sum-m+k;
           y=y/k;
            c=c+y;
            if(flag==0){
            cout<<c<<endl;
            }
        delete [] arr;
    }
}
