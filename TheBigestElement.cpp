#include<bits/stdc++.h>
using namespace std;
void enterArray(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void printArray(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}	
}
void theBigestElement(int a[], int n){
	int maxValue=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>maxValue){
			maxValue=a[i];
		}
	}
	cout<<"TheBigestElement :"<<maxValue<<"\n";
}
int main(){
	int n;
	cin>>n;
	int a[n];
	enterArray(a,n);
	theBigestElement(a,n);
	printArray(a,n);
	return 0;
}

