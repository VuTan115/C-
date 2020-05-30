#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n-1;j++){
            cout<<"*";
        }
        cout<<" ";
    }
}
int mai(){
    int n;
    cin>>n;
    print(n);
}
