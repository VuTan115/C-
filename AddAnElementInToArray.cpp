#include <bits/stdc++.h>
using namespace std;
void insert(int &Position, int &Value, int &n, int a[])
{
	for (int i = n; i > Position; i--)
	{
		a[i] = a[i - 1];
	}
	n += 1;
	a[Position] = Value;
}
int main()
{
	int n;
	cout << "Enter Array Lenght: ";
	cin >> n;

	int a[n];
	int Position;
	int Value;
	//Enter array
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter Position You Wanna Insert The Element: ";
	cin >> Position;
	Position -= 1;
	cout << "The Element Need Insert: ";
	cin >> Value;
	if (Position < 0)
	{
		Position = 0;
	}
	else if (Position > n)
	{
		Position = n;
	}
	insert(Position, Value, n, a);
	cout<<"New Array Is: \n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}
