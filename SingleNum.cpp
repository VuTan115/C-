#include <bits/stdc++.h>
using namespace std;
void enterArray( int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void printArray( int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"\n";
}
void sort(int a[],int n){
	int temp;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
//void singleNumber(int a[], int n){
//	for(int i=0;i<n;){
//		if(a[i]==a[i+1]){
//			i=i+2;
//		}else
//		{
//			cout<<a[i];
//			i=n;
//		}
//	}
//}
void singleNumber(int a[], int n){
	for(int i=0;i<n;i++){
		if((a[i]+a[i+1])%2!=0){
			cout<<a[i+1];
		}
	}
}
int main(){
	int n;
	cout<<"Enter Array Length : ";
	cin>>n;
	int a[n];
	cout<<"Enter Array : \n";
	enterArray(a,n);
	cout<<"Original Array :";
	printArray(a,n);
	sort (a,n);
	cout<<"Single Number : ";
	singleNumber(a,n);
	

	
 	
}
