#include <bits/stdc++.h>
#include <fstream>
using namespace std;

// kiểm tra xem các số trong file có phải số nguyên tố hay không nếu đúng thì trả về yes bên cạnh nếu ko thì trả về no
bool isPrimeNumber(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        if (n == 2)
            return true;
        else
        {
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    return false;
                    break;
                }
            }
            return true;
        }
    }
}
// int main()
// {
//     ifstream Filein;
//     int i = 0;
//     int count=00;
//     int a[100];
//     ofstream Fileout;
//     Filein.open("Input.txt", ios_base::in);
//     while (!Filein.eof())
//     {
//         Filein >> a[i];
//         i++;
//         count++;
//     }
//     cout<<"Number of Element is: "<< i <<"\n";
//     cout<<"Number of Element is: "<< count <<"\n";
//     Fileout.open("Output1.txt", ios_base::out);
//     for (size_t i = 0; i < count; i++)
//     {
//         if (isPrimeNumber(a[i]))
//         {
//             Fileout << a[i]<<" ";
//         }
//     }
//     Fileout.close();
//     Filein.close();
//     system("pause");
// }
int main()
{
    ifstream file("Input.txt");
    if (!file)
    {
        cout << "Error: cannot open file\n";
        return 0;
    }
    int count = 1;
    while (!file.eof())
    {
        int age;
        file >> age;
        string line;
        getline(file, line);
        getline(file, line);
        
        if (file)
        {
            cout << count << ": " << line<<" "<<age << endl;
            count++;
        }
    }
    return 0;
}
