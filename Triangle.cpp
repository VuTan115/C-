#include <bits/stdc++.h>
using namespace std;

void typeOfTriangle(int a, int b, int c){
    if(a==0||b==0||c==0){
        cout<<"Invalid"<<"\n";
    }
    else if(a+c<=b||a+b<=c||b+c<=a){
        cout<<"Invalid"<<"\n";
    }
    else if(a+c>b&&a+b>c&&b+c>a)   
    {   
    	if(a==b&&b==c&&c==a){
            cout<<a+b+c<<"\n";
            cout<<"deu"<<"\n";
        
        }
        else if(a==b||a==c||c==b){
            cout<<a+b+c<<"\n";
            cout<<"can"<<"\n";
        }
        else if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b){
            cout<<a+b+c<<"\n";
            cout<<"vuong"<<"\n";
        }
        else {
      	 	cout<<a+b+c<<"\n";
            cout<<"thuong"<<"\n";
		}

    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    typeOfTriangle(a,b,c);
    return 0;
}
