#include <bits/stdc++.h>
using namespace std;
void QuadraticFunction(float a, float b, float c)
{
    float Delta = (b * b) - 4 * (a * c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "phuong trinh co vo so nghiem :";
            }
            else
            {
                cout << "NaN";
            }
        }
        else
        {
            cout << "Phuong trinh co nghiem duy nhat :" <<fixed << setprecision(2)<<(-c/b);
        }
    }
    if (Delta < 0)
    {
        cout << "Phuong trinh vo nghiem";
    }
    else if (Delta == 0)
    {
        cout << "Phuong trinh co nghiem duy nhat :" <<fixed << setprecision(2) << -b/2*a;
    }
    else
    {
        cout << "Phuong trinh 2 nghiem phan biet :" <<fixed << setprecision(2)<< (-b+sqrt(Delta))/(2*a)<<" va "<< (-b-sqrt(Delta))/(2*a)<<endl;
    }
}
int main()
{
    float a ,b,c;
    cin >> a >> b >> c;
    QuadraticFunction(a, b, c);
    return 0;
}