#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a * b != 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else if (a < b)
        {
            b %= a;
        }
    }
    return a + b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int d = gcd(a, b);
    if (a == 0)
    {
        cout << 0;
    }
    else if (a * b < 0)
    {
        a = abs(a);
        b = abs(b);
        if (b / d == 1)
        {
            cout << "-" << a / b;
        }
        else
        {
            cout << "-" << a / d << "/" << b / d;
        }
    }
    else if (a * b > 0)
    {
        a = abs(a);
        b = abs(b);
        if (b / d == 1)
        {
            cout << a / b;
        }
        else
        {
            cout << a / d << "/" << b / d;
        }
    }

    return 0;
}