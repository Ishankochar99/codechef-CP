#include<bits/stdc++.h>
using namespace std;
int main(){
long long test;
cin>>test;
while(test--){
    long long n,x;
    cin>>n>>x;
    long long mi=0,ma=0;
    long long la;
    long long ind=0;
        for(long long i=0;i<n;i++){
            cin>>la;
            ma = ma+int((la+x-1)/x);
            ind+=la;
        }
        mi=(ind+x-1)/x;
        cout<<mi<<" "<<ma<<endl;
    }
}
