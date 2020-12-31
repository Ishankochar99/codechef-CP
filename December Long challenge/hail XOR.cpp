#include<bits/stdc++.h>

using namespace std;

int numberBit(long long n){
    if(n == 0){
        return 0;
    }
    long long bit=0;
    n=n/2;
    while(n!=0){
        n=n/2;
        bit++;
    }
    return bit;
}
int printll(long long n){
    cout<<n<<endl;
}
vector<long long>Tobinary(long long n){
vector<long long>v;
int i=0;
    long long sum=1;
    while(n>0){
        if(n%2==1){
            v.push_back(i);
        }
        n=n/2;
        sum=sum*2;
        i++;
    }
    return v;
}
int main(){
long long testcase;
cin>>testcase;
while(testcase--){
    long long n,x;
    cin>>n>>x;
    long long arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<bool>vec(64,0);
        long long i=0;
        long long index=0;
        bool change=true;
        while(i<n-1 && x>0){
            vector<long long> s = Tobinary(arr[i]);
            for(int iter=s.size()-1;iter>=0 && x>0;iter--){
                long long index = 1<<(s[iter]);
                if(vec[s[iter]]){
                    arr[i]=arr[i]^index;
                    vec[s[iter]]=0;
                    change=false;
                }
                else{
                    vec[s[iter]]=1;
                    arr[i]=arr[i]^index;
                    x--;
                }
            }
            i++;
    }
        if(x==0){
            i--;
            while(i<n-1){
                vector<long long>s=Tobinary(arr[i]);
                for(int j=s.size()-1;j>=0;j--){
                    if(vec[s[j]]){
                        long long k=1<<s[j];
                        arr[i]=arr[i]^k;
                        vec[s[j]]=0;
                        change=false;
                    }
                }
            i++;
    }
}
long long k=1;
    for (int i=0;i<64;i++){
        if(vec[i]){
            arr[n-1]=arr[n-1]^k;
        }
        k*=2;
}
        if(x%2==1 && change){
            arr[n-1]=arr[n-1]^1;
            arr[n-2]=arr[n-2]^1;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
