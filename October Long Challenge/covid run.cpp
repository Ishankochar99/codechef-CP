#include <iostream>
#include<queue>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,k,x,y,r,f=0;
        cin>>n>>k>>x>>y;
       for(int i=1;i<=n;i++){
       r =(x+k)%n;
       if(r==y){
        cout<<"YES"<<endl;
        f=1;
        break;
       }
       x=r;
       }
       if(f==0){
       cout<<"NO"<<endl;
       }
    }
}
