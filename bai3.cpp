#include <iostream>
#include <cmath>
using namespace std;
	int BinaryToDecimal(long long BinaryNumber){
		int p=0;
		int DecimalNumber=0;
		while(BinaryNumber>0){
			DecimalNumber+=(BinaryNumber%10)+pow(2,p);
			++p;
			BinaryNumber/=10;
		}
		return 	DecimalNumber;
	}
	int main(){
		long long BinaryNumber=0;
		cin >> BinaryNumber;
		cout<< BinaryToDecimal(BinaryNumber);
	}
