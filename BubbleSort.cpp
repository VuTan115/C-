#include<bits/stdc++.h>
using namespace std;

void sort(float array[],int &n){
	float flag;
	int count1=0;
	int count2=0;
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			
			if(array[i]>array[j]){
				count1+=1;
				flag=array[i];
				array[i]=array[j];
				array[j]=flag;
			}
					count2++;
			
			//he
			
			
			//nothing
		}

	}
	cout<<"Exchanged Time: "<<count1<<"\n";
	cout<<"Compared Time: "<<count2<<"\n";
}
int main(){
	int n;
	bool flag=true;
	cout<<"Enter Array Length: ";
	cin>>n;
	float array[n];
	do{
		cout<<"Your Array is too short! ";
		cout<<"ReEnter Your Array! \n";
		cout<<"Enter Array Length: ";
		cin>>n;
	}
	while(n<2);

	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	 sort(array,n);
	 cout<<"Sorted Array: ";
 	for(int i=0;i<n;i++){
		cout<<fixed<<setprecision(2)<<(float)array[i]<<" ";
	}

        
	return 0;
}

