#include<bits/stdc++.h>
using namespace std;
void sort(int a[], int n){
	int temp=0;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]<a[j]){
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			}

		}
	}
}
int main(){
	int n;
	cout<<"Enter Array Length: ";
	cin>>n;
	 int a[n];
	 cout<<"Enter Array: \n";
	 for(int i=0;i<n;i++){
	 	cin>>a[i];
	 }
 	 sort(a,n);
//	 for(int i=0;i<n;i++){
//        if(a[i]==a[i+1]){
//        	for(int j=i;j<=n;j++){
//        			a[j]=a[j+1];
//			}
//        
//        	--n;
//		}//cout<<"This "<<a[i+1]<<"\n";
//    }
	  for(int i = 0;i < n;i++){
	  	cout<<a[i];
	  }
	  cout<<"\n==============\n";
      for(int i = 0;i < n;){
      	if(a[i]==a[i+1]){
      		i=i+2;
		  }else {
		  	cout<<a[i];
		  	i=n;
		  }
	  }
	return 0;
}

