#include<iostream>
#include<algorithm>
using namespace std;
#define SORT(v) sort(ALL(v))
int main()
{
    long testcase;
    cin>>testcase;
    while(testcase--)
    {
    long n,x,p,k;
    cin>>n>>x>>p>>k;
    long arr[n+1],c=0,o=0,in=0;
        for(int i=0;i<n;i++){
            cin>>arr[i]; // take input
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                in=i+1;
                c++;
            }
        }
    if(arr[in-1]!=x){
        arr[k-1]=x;
        sort(arr,arr+n); // if not sort again
        o++;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                in=i+1;
                c++;
            }
        }
    }
        if(arr[p-1]==x){
            cout<<o<<endl;
        }
        else if(k>=p && arr[p-1]>=x){
            if(c>1){
              in=in-c;
              in=in+1;
            }
            if(p>=in && p<=k){
               cout<<o + ( p - in ) - c + 1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(k<=p && arr[p-1]<=x){
            if(k<=p && p<=in){
            cout<<o + ( in - p ) - c + 1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}
