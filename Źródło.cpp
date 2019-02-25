#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	while (a != b)
	{
		if (a < b) b -= a;
		else if (b < a) a -= b;
		else if (a*b == 0) break;
	}
	cout << a + b;
	
	system("pause");
	return 0;
}