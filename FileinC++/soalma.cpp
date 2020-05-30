#include<bits/stdc++.h>
using namespace std;
int random(int n){
    return rand()%(n-1);
}
int main(){
    srand(time(0));
    int n;
    int a[100];
    int i=0;
    ifstream Filein("Input.txt");
    while(Filein&&!Filein.eof())
    {
        Filein >> a[i];
        i++;
    }
    ofstream Fileout;
    Fileout.open("Output.txt", ios_base::app);

    for (int j = 0; j < i; j++)
    {
        cout<<a[random(i)]<<" ";
        Fileout<<a[random(i)]<<" ";
    }
    cout<<"\n";
    Fileout.close();
    Filein.close();
    cout<< "Done\n";
    system("pause");
    
}