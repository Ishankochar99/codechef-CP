#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;

int main()
{
    long long t;
    cin>>t;
    vector<long long> prime;
    long long high=4000000;
    bool arr[high+1]={};
    for (long long i = 2; i <= high; i++)
    {
        if(!arr[i])
        {
            arr[i]=true;
            prime.push_back(i);
            //cout<<i<<" ";
        }
        for(int j=i;j<=high;j+=i)
        {
            arr[j]=true;
        }
    }

    while(t--)
    {
        long long n;
        long long count=0;
        cin>>n;

        long long a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            a[i]=(prime)[b[i]-1];
        }


        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}
