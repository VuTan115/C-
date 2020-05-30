#include <bits/stdc++.h>
using namespace std;

int main()
{
    char character;

    do
    {
        cin >> character;
        if (character >= 48 && character <= 57)
        {
            cout << "number ";
          
        }
        else if (character >= 65 && character <= 90||character >= 97 && character <= 122)
        {
            switch (character)
            {
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            case 'i':
            case 'I':
            case 'a':
            case 'A':
            case 'e':
            case 'E':
                cout << "Vowel " << endl;
                break;

            default:
                cout << "Consonant " << endl;
                break;
            };
        }
        else
        {
            cout << "AnotherTypeOfCharacter " << endl;
            break;
        }
        /* code */
    } while (character < 10000);
    return 0;
}