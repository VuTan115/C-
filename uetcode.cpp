#include<bits/stdc++.h>
using namespace std;
#include <string.h>
void pad_right(char *s, int n)
{
	cout<<strlen(s)<<"\n";
 	cout<<*(s+3)<<"\n";	
 	cout<<strlen(s)<<"\n";
}
int main(){
	int n;
	cin>>n;
	char s[3]={'a','b','c'};
	pad_right(s,n);
}

