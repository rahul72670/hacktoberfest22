#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void primefector(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                   spf[j]=i;
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
int main(){
    int n=42;
    
    primefector(n);
    return 0;
}