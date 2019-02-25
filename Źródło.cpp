#include <iostream>

using namespace std;

int main()
{
	int a, b, c=1;
	cin >> a >> b;
	for (int i = 1; i <= b; i++)
	{
		c *= a;
	}
	cout << c%10;
	system("pause");
	return 0;
}