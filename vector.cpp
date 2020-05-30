#include<bits/stdc++.h>
#include<vector>
using namespace std;
void showVector(vector<int>arr){
	 for(auto i =arr.begin() ; i!=arr.end() ;i++){
		cout<<*(arr+i)<<endl;
		}
}
int main(){
	int n=10;
	vector<int> arr;
	for(int i=0;i<n;i++){
			arr.push_back(i);
	}
	showVector(arr);

	return 0;
}

