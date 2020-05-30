#include<bits/stdc++.h>
using namespace std;
	void reserve(char *s){
    int length=strlen(s);
	for(int i=length-1;i>=0;i--){
		cout<<s[i];
	}
}

int main(){
	char s[100];
	cin.getline(s,100);
	reserve(s);

}

