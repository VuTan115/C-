#include<bits/stdc++.h>
using namespace std;
void cout(vector<int> v){
		for(auto i = v.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
}
int main(){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	

	cout<<v1.size()<<endl;
	cout<<v1.back()<<endl;
	cout<<v1.front()<<endl;
	cout<<v1.at(0)<<endl;
	v1.pop_back();
	cout<<v1.size()<<endl;
	cout<<v1.back()<<endl;

	
	return 0;
}

