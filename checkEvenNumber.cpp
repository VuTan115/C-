#include <bits/stdc++.h>
using namespace std;
// void chia(int number)
// {

//     if (number != 0)
//     {
//         chia(number / 10);
//         cout << number % 10 << endl;
//     }
// }

int main()
{
    int lastNumber;
    int Number;
    bool EvenNumber = true;
    cin >> Number;
    while (Number > 0)
    {
        lastNumber = Number % 10;
        if (lastNumber % 2 == 1)
        {
            EvenNumber = false;
            break;
        }
        Number/= 10;
    }

    if (EvenNumber==true)
    {
        cout << "correct";
    }
    else
    {
        cout << "wrong";
    }
}
