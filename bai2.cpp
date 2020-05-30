#include <iostream>
using namespace std;
	int main(){
		long long num , ans=1;
		cin>> num;
		if (num>0){
		
			for (int i=1; i<=num; i++){
				ans*=i;
			}
				cout << ans;
		}
		else
		cout<< "NaN ";//Jessus
		
	
	}
