#include<iostream>
using namespace std;
void printarray(long long arr){
 cout<<arr<<endl;
}
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long xmas;
long long ar1=0,flag=0;
        for(int i=0;i<n;i++){
            cin>>xmas;
            flag+=xmas;
            if(flag>ar1)
            {
            ar1=flag;
            }
        }
cin>>n;
flag=0;
long long ar2=0;
    for(int i=0;i<n;i++){
        cin>>xmas;
        flag+=xmas;
        if(flag>ar2)
            {
            ar2=flag;
            }
        }
    cout<<ar1+ar2<<endl;
}
}
