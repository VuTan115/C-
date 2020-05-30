#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n; cin >> n;
    vector <int> a(6,0);
    int max = 0;
    int nhap;
    for (int i = 0; i < n; i++)
    {
        cin >> nhap;
        a[nhap]++;
        cout<<"cai lon gi do  "<<a[nhap];
        if (max < a[nhap]) max = a[nhap];
    }
    for (int i = 1; i < 6; i++)
    {
        if (a[i] == max)
        {
            cout << i;
            
            break;
        }
    }
    return 0;
}
