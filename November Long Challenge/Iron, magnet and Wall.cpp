#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     int answer=0,p,sij=0;
     string st;
     cin>>st;
     int i=0,j=0;
        while((i<n) && (j<n)){
            if(st[i]=='M'){
              if(st[j]=='I'){
                    if(i>j){
                        for(int z=j+1;z<i;z++){
                            if(st[z]==':'){
                                sij++;
                            }
                        }
                    }else if(i<j){
                    for(int z=i+1;z<j;z++){
                            if(st[z]==':'){
                                sij++;
                            }
                        }
                    }
                p=k+1-abs(i-j)-sij;
                if(p>0){
                    answer=answer+1;
                    i++;
                    j++;
                    sij=0;
                }
                else{
                    if(i>j){
                        j++;
                        sij=0;
                    }
                    else{
                        i++;
                        sij=0;
                    }
                }
              }
              else if(st[j]=='X'){
                    i=j;
                    i++;
                    j++;}
              else{
                    j++;}
        }
              else if(st[i]=='X'){
                    j=i;
                    i++;
                    j++;
              }
              else{
                    i++;
              }
        }
      cout<<answer<<endl;
    }
}
