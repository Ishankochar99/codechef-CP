#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  long long n,red=0,blue=0;
  cin>>n;
 string s1,s2;
 cin>>s1>>s2;
 for(int i=0;i<n;i++){
    if(s1[i]>s2[i]){
        red++;
    }else if(s1[i]<s2[i]){
        blue++;
    }
 }
 if(red==blue){
    cout<<"EQUAL"<<endl;
 }else if(red>blue){
    cout<<"RED"<<endl;
 } else{
 cout<<"BLUE"<<endl;
 }
}
}
