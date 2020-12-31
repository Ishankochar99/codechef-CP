#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
    long long n=s.size();
    long long lab,rab,qq;
    rab=count(s.begin(), s.end(), '(');
    lab=count(s.begin(), s.end(), ')');
    qq=count(s.begin(), s.end(), '?');
    if(s[0]==')')
        cout<<"NO"<<endl;
    else if(s[n-1]=='('){
        cout<<"NO"<<endl;
    }
    else if(qq%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
}
