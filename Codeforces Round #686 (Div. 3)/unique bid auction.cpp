#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  map<int,int>m1,m2;
  int ans;
  for(int i=0;i<n;i++){
    cin>>ans;
    m1[ans]++;
    m2[ans]=i+1;
  }
  int index=-1;
  for(auto i:m1){
    if(i.second==1){
        index=i.first;
        break;
    }
  }
  if(index==-1){
    cout<<-1<<endl;
  }else{
  cout<<m2[index]<<endl;
  }
  }
}
