#include<bits/stdc++.h>
using namespace std;

void isPrimeNumber( int n){
for(int number=0;number<=n;number++){
		if(number>=2){
			int count=0;
			for(int i=1;i<=number;i++){
				if(number%i==0){
					count++;
//					cout<<"count :"<<count<<"\n";
				}
			}
			if(count==2){
					cout<<"PrimeNumberIs :"<<number<<"\n";
				}
			
		}
	}
}
void isPerfectNumber(int n){
	for(int number=0;number<=n;number++){
		if(number>1){
			int sum=0;
			for(int i=1;i<number;i++){
				if(number%i==0){
					sum+=i;
				}
			}
			if(sum==number){
				cout<<"PerfectNumberIs :"<<number<<"\n";
			}
		}
	}
}
void isSquareNumber(int n){
    for(int number=1;number<=n;number++){
		if(number>2){
			int square=sqrt(number);
			if(square*square==number){
				cout<<"SquareNumberIs :"<<number<<"\n";
			}
		}
	}
}
int main(){
    int n;
    cin>>n;
    isPrimeNumber(n);
    isPerfectNumber(n);
    isSquareNumber(n);
    return 0;
}
