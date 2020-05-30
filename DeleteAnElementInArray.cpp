#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m; 
	cout<<"Enter Array Length: \n";
	cin>>n; 	
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Index That You Wanna Delete: \n";
	cin>>m;
	if(m<=0){
		m=0;
	}else if(m>=n){
		m=n-1;
	}
	for(int i=m;i<n;i++){
			arr[i]=arr[i+1];
	}
	n-=1;
		for (int i=0;i<n;i++){
		cout<<arr[i];
	}

	return 0;
}

