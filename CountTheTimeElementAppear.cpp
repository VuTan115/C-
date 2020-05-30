#include <bits/stdc++.h>
using namespace std;
#define MAX = 100;
// kĩ thuật sử dụng mảng phụ
void enterArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
    }
}
void differentElement(int a[], int b[], int n, int &m)
{
    b[m]=a[0];
    m++;
    for(int i=1;i<n;i++){
        bool check=true;
        for (int j = i-1; j>=0; j--)
        {
            if(a[i]==b[j]){

                check=false;
                break;
            }
        }
        if(check==true){
            b[m]=a[i];
            m++;
        }
    }
}
void countTimeAppear(int a[], int n, int b[], int m)
{
    differentElement(a, b, n, m);

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                count++;
            }
        }
        cout << b[i] << " " << count << "\n";
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n, m = 0; //số lượg phần tử của mảng a[],b[]
    cout << "Enter Array Length! \n";
    cin >> n;
    int a[n];
    int b[m];
    enterArray(a, n);
    // differentElement(a,b,n,m);
    printArray(b, m);
    cout << "\n==========\n";
    countTimeAppear(a, n, b, m);

    return 0;
}