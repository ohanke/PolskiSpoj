#include <iostream>

using namespace std;

int main()
{
	int x,s=1;
	cin >> x;

	for (int i = 1; i <= x; i++) //silnia
	{
		s *= i;
	}
	
	int a, b;
	if (s < 10) { a = 0; b = s; }
	else if (s >= 10) { a = s / 10; b = s % (a * 10); }

	cout << a << " " << b;
	system("pause");

	return 0;
}
