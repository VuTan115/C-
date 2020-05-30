#include<bits/stdc++.h>
using namespace std;
// pass by reference
void swap1 (int *a, int *b){// truyen vao dia chi cua bien a, b
	int temp=*a;
 	*a=*b;
 	*b=temp;
}
//passs by value
void swap2 (int a, int b){ // truyen vao gia tri cua bien a, b
	int temp=a;
 	a=b;
 	b=temp;
}
int main(){
	int a,b;
	cout<<"Enter A Value: \n";
	cin>>a;
	cout<<"Enter B Value: \n";
	cin>>b;
//	swap1(&a,&b); // truyen vao dia chi cua 2 bien a, b
//	cout<<a<<" "<<b<<endl;
	swap2(a,b);// truyen vao gia tri cua a, b
	cout<< a<<" "<<b<<endl;
	
	
	return 0;
}

