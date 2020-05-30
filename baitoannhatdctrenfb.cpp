#include <bits/stdc++.h>
using namespace std;
void enterVector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        arr.push_back(i);
    }
}
void printVector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }
}
int main()
{
    vector<int> arr;
    arr.resize(5);
    enterVector(arr);
    printVector(arr);
    cout << arr.at(1) << "\n========\n";

    return 0;
}