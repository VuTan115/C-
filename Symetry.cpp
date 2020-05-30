#include<bits/stdc++.h>
using namespace std; 
void allEvenOrOddNumber(int number,int pos){
    int last=0;
    int length=0;

    for( int i=0;number>0;i++){
	        last=number%10;
			 length++;
	        if(last==pos){
	        	cout<<"this "<<i+1<<"\n";
	            break;
			}
			number/=10;
		}
}
int main(){
    int n;
    int pos;
    int number;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>number;
        cin>> pos;
        allEvenOrOddNumber(number,pos);
    }

    
    return 0;
}

