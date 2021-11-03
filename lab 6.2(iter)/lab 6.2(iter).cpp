#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Input(int* a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}
void Print(int* a, const int size)
{
	cout << "a = {";
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << " }"<< endl;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (abs(i % 2 != 0))
			S += a[i];
	return S;
}
int main()
{
	const int n = 15;
	int a[n];

	Input(a, n); 
	Print(a, n);

	cout << "Sum = " << Sum(a, n) << endl;

	return 0;
}