#include <bits/stdc++.h>
using namespace std;
void enterArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]:";
        cin >> a[i];
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "" << a[i] << " "
             << "\n";
    }
}
void xoaPhanTuLap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        bool appear = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] == a[j])
            {
                appear = true;
            }
        }
        if (appear == false)
        {
            for (int k = 0; k < n; k++)
            {
                if (a[i] == a[k])
                {
                    count++;
                }
            }
            cout << a[i] << " " << count << "\n";
        }
    }
}
int main()
{
    int n;
    cout << "Nhap do dai cua mang: ";
    cin >> n;
    int a[n];
    enterArray(a, n);
    xoaPhanTuLap(a, n);
    // printArray(a,n);
}