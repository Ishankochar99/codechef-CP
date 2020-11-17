#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Br cout<<endl
#define int long long
#define pb push_back
#define mp make_pair
#define double long double
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define PT(x) cout << (x) << endl
#define PTT(x) cout << (#x) << " is " << (x) << endl;
#define debug(x) cout<<"~~"<<#x<<" => "<<x<<endl;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
const int M = 1e9 + 7;
const int N = 2e6 + 10;
const int IM = 1e15 + 37;
const double PI = 3.1415926535897932384;
inline void PP(int n) { cout << n << " ";}
void IN(vector<int>&arr,int n,int x=0){for(int i=x;i<n+x;i++)cin>>arr[i];}
void PV(vi v) { for (int i = 0 ; i < v.size() ; i++) cout << v[i] << " " ; cout << endl;}
void PVR(vi v) { for (int i = v.size()-1 ; i >=0 ; i--) cout << v[i] << " " ; cout << endl;}
void PVV(vii v) {for (int i = 0 ; i < v.size() ; i++) cout << v[i].first << " " << v[i].second << endl;}
void PA(int v[], int n, int x = 0) { for (int i = x ; i < n + x; i++)cout << v[i] << " " ; cout << endl;}
void IN(int a[], int n, int x = 0) {for (int i = x; i < n + x; i++)cin >> a[i];}
void magicalCandy()
{
	long long n;
	cin>>n;
	long long a[n]; //define the array
	long long l=0,t=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1){ //if 1 is found
			if(i==0){
				l=1;
			}
			else if(i!=n-1){
				l=2;
				t=i;
			}
		}
	}
		if(l==1)
		{
			int r;
			cin>>r;
			while(r--){
				int value;
				cin>>value;
				int ans;
				if(value%n==0){
					cout<<(value/n)%M<<endl;
				}
				else{
					if(value%n==1 && value>n)
					{
						cout<<(value/n)%M<<endl;
					}
					else{
						cout<<(value/n+1)%M<<endl;
					}
                    }
                }
		}
		else if(l==2)
		{
			int sum=0;
			int flag[(int)1e5]={0};
			for(int i=0;i<n-1;i++)
			{
				if(i!=t-1)
				{
					if(a[i]%2==0)
					{
						sum+=a[i];
						flag[i]=sum;
					}
					else
					{
						sum+=a[i]-1;
						flag[i]=sum;
					}
				}
				else{
					if(a[i]%2==0){
						sum+=a[i]-1;
						flag[i]=sum;
					}
					else
					{
						sum+=a[i];
						flag[i]=sum;
					}
				}
			}
			if((a[n-1]%2)==0)
			{
				sum+=a[n-1]-1;
			}
			else
			{
				sum+=a[n-1];
			}
			int r;cin>>r;
			while(r--)
			{
				int value;
				cin>>value;
				if(value%n==0){
					if((a[n-1]%2)==0)
					{
						cout<<((value/n)*sum+1)%M<<endl;
					}
					else{
						cout<<((value/n)*sum)%M<<endl;
					}
				}
				else
				{
					if(t==value%n-1)
					{
						if(a[t-1]%2==0)
						{
							cout<<((value/n)*sum+flag[value%n-1]+2)%M<<endl;
						}
						else
						{
							cout<<((value/n)*sum+flag[value%n-1])%M<<endl;
						}
					}
					else if(t-1==value%n-1){
						if(a[t-1]%2==0){
							cout<<((value/n)*sum+flag[value%n-1]+1)%M<<endl;
						}
						else{
							cout<<((value/n)*sum+flag[value%n-1])%M<<endl;
						}
					}
					else{
						if((a[value%n-1]%2)==1)
						{
							cout<<((value/n)*sum+flag[value%n-1]+1)%M<<endl;
						}
						else
						{
							cout<<((value/n)*sum+flag[value%n-1])%M<<endl;
						}
                        }
                    }
                }
		}
		else{
			int sum=0;
			int flag[(int)1e5]={0};
			for(int i=0;i<n-1;i++){
				if(a[i]%2==1){
					sum+=a[i]-1;
					flag[i]=sum;
				}
				else{
					sum+=a[i];
					flag[i]=sum;
				}
			}
			if(a[n-1]%2==0){
				sum+=a[n-1]-1;
			}
			else{
				sum+=a[n-1];
			}
			int r;
			cin>>r;
			while(r--)
			{
				int value;
				cin>>value;
				if(value%n==0){
					if((a[n-1]%2)==0){
						cout<<((value/n)*sum+1)%M<<endl;
					}
					else{
						cout<<((value/n)*sum)%M<<endl;
					}
				}
				else{
					if(a[value%n-1]%2==1)
					{
						cout<<((value/n)*sum + flag[value%n-1]+1)%M<<endl;
					}
					else
					{
						cout<<((value/n)*sum + flag[value%n-1])%M<<endl;
					}
				}
			}
		}
}
signed main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
         magicalCandy();
}
}
