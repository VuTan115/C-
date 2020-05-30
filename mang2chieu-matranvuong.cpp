#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"*";
        int count =n+1;
        for(int j=i+1;j<=n;j++){
            
            cout<<"*";
            count--;

        }
        cout<<"\n";
        if(count>0){
            for(int k=1;k<count;k++){
                cout<<" ";
            }
        }
        

    }
    return 0;
}