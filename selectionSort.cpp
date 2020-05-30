#include<bits/stdc++.h>
using namespace std;
void enterArray(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void printArray(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
}
void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
void selectionSort(int a[], int n){
	for(int i=0;i<n-1;i++){
			int minIndex=i;
			for(int j=i+1;j<n;j++){
				if(a[minIndex] > a[j]){
					minIndex=j;
					swap(a[i], a[minIndex]);
				}
			}
	}
	
}
//void Sapxep(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j < n; j++)
//			if (a[min]>a[j])
//				min = j;
//			swap(a[i], a[min]);
//	}
//}
int main(){
	int n;
	cin>>n;
	int a[n];
	enterArray(a,n);
	selectionSort(a,n);
//	Sapxep(a,n);
	printArray(a,n);
	return 0;
}
