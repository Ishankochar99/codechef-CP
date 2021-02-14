#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int t,n,m,i,ans;
	cin>>t;
	while(t--){
		cin>>n;
		ans=0;
		vector<int> v(n);
		for(i=0;i<n;i++)
			cin>>v[i];
		for(i=n-1;i>=0;i--){
			if(i+v[i]<n){
				v[i]+=v[i+v[i]];
			}
			ans=max(ans,v[i]);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
