#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	
	do
	{
		if (a > b) a -= b;
		else if (a < b) b -= a;
	} while (a != b);
	
	c = a + b;
	cout << c;
	
	system("pause");
	return 0;
}
