#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n, ans;
    cin>>n;
    cin>>ans;
    int index;
    map<int,int> m1,m2; //initialize map
    m1[ans]++;
    m2[ans]++;
    index = ans;
    for(int i=1;i<n;i++){
        cin>>ans;
        if(ans==index){
            continue;
        }if(m1[ans]==0){
            m1[ans]++;
            m2[ans]+=2;
            }
            else{
            m1[ans]++;
            m2[ans]++;
            }

            if(i<n){
                index = ans;
            }
}
        int value = n;

        m2[ans]--;

        for(auto i : m2){ //travel in map
            if(i.second < value){
                value = i.second;
            }
        }
        cout<<value<<endl;
    }
}
