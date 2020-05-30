#include <bits/stdc++.h>
using namespace std;
struct student{
    string name;
    string mssv;
    int age;
    int mathMark, physicalMark, EnglishMark;
    float average;
};
// typedef struct sinhVien sinhvien;
void entryData( struct student &st){
    fflush(stdin);
    cout<<"Entry student name: \n";
    getline(cin,st.name);
     fflush(stdin); 
    cout<<"Entry mssv : \n";
    getline(cin,st.mssv);
    cout<<"Entry math mark: \n";
    cin>>st.mathMark;
    cout<<"Entry physical mark: \n";
    cin>>st.physicalMark;
    cout<<"Entry english mark: \n";
    cin>>st.EnglishMark;
}
void printData( struct student st){
    cout<<"\nStudent name: "<<st.name<<"\n";
    cout<<"\nMssv : "<<st.mssv<<"\n";
    cout<<"\nMath mark: "<<st.mathMark<<"\n";
    cout<<"\nPhysical mark: "<<st.physicalMark<<"\n";
    cout<<"\nEnglish mark: "<<st.EnglishMark<<"\n";
}
int main(){
    cout<<"Chuong trinh quan li sinh vien\n";
    student x;
    int n;
    cout<<"Entry number of students: \n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"student "<<i+1<<"\n";
        entryData(x);
        printData(x);
    }
    return 0;
}