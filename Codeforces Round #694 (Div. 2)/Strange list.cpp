#include<bits/stdc++.h>
using namespace std;
#define maxx=100009;
void printff(int n){
    cout<<n;
}
int main(){
int test;
cin>>test;
while(test--){
    long long n,x; //inititalize
    cin>>n>>x;
    long long array[n][2];
    bool temp=true;
    long long finals,mal;
    long long sem,index=0,op=INT_MAX;;
    for(int i=0;i<n;i++){
        cin>>finals;
        array[i][0] = finals;
        mal = 1;
        while(temp && finals%x==0){
            mal++;
            finals/=x;
            }
        if(op > mal){
            op = mal;
        }
        array[i][1] = op;
}
        for(long long i = 0 ; i < n ; i++){
            if(array[i][1] > op){
                index=index+(array[i][0]*(op+1));
            }else{
                index=index+(op*array[i][0]);
        }
    }
        cout<<index<<endl;
}
}
