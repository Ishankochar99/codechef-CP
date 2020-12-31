#include<bits/stdc++.h>
using namespace std;
int main(){
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int sum=0,i=1,c=0;
    while(sum<p){
        if(i>=d1){
            sum+=v1;
        }
        if(i>=d2){
            sum+=v2;
        }
        i++;
        c++;
    }
    cout<<c<<endl;
}
