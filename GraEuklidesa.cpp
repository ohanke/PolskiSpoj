#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        while (a != b)
        {
            if (a > b)
                a -= b;
            if (a < b)
                b -= a;
        }

        c = a + b;
        cout << c << endl;
    }
    
    return 0;
}
