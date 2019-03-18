#include <iostream>
#include <string>

using namespace std;

int main()
{
	string zm;
	cin >> zm;

	for (int i = 0; i<zm.length()/2; i++)
	{
		cout << zm[i];
	}

	system("pause");
	return 0;
}
