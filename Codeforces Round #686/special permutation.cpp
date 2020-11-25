#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
 int v[n+1];
  for(int i=1;i<=n;i++){
    v[i]=i;
  }
  int start=1,e=n;
  if(n%2==0){
    reverseArray(v,1,n);
  }else{
         reverseArray(v,1,n);
       int mid= start + (e - start)/2;
       swap(v[mid],v[1]);
  }
  for(int i=1;i<=n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  }
}
