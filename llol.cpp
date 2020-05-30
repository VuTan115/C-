#include<iostream>
using namespace std;
int main(){
     int a;
    int diem[10];
    int diem2[10];
    for (int  i = 0; i <10; i++)
        diem[i]=i*2;
    
    for (int i = 0; i < 10; i=i+2)
        diem2[i]=diem[10-i-1];
     
    for (int  i = 0; i < 5; i++)
    {
        cout<<diem2[i]<<" ";
    }
    
    
}