#include<bits/stdc++.h>
using namespace std;
void printff(int n){
cout<<n<<endl;
}
int main(){
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
const ll N = 3e5 + 5;
const ll MAX = 3e5 + 5;
const ll M = 1e6 + 5;
const int mod = 1e18 + 7;
ll test;
cin>>test;
while(test--){
    int n,m;
    cin>>n>>m;
    int k[n+1];
    ll c[m+1];
map<int,int,greater<int>> mp1; //initialize the map
for(int i=1;i<=n;i++){
    cin>>k[i];
    mp1[k[i]]++;
}
    for(int j=1;j<=m;j++){
        cin>>c[j];
}
  int temp = 1;
    ll sol = 0;
    for(auto m : mp1){
    int numb=0,sum=0;
    for(int i = temp ; i <m.first && i<temp + m.second ; i++){
        sum+=c[i];
        sol+=c[i];
        numb++;
    }
    temp+=numb;
    m.second-=numb;
    sol=sol+(c[m.first] * m.second);
    sum=sum+(c[m.first] * m.second);
}
cout<<sol<<endl;
}
}
