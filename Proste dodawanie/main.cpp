#include <iostream>

using namespace std;

int main()
{
    int n,suma=0;

    cout << "Ile liczb chcesz do siebie dodac: ";
    cin >> n;

    int *tab=new int [n];
    for(int i=0; i<n; i++)
    {
        cin>>tab[i];
        suma+=tab[i];
    }

    cout << "Suma tych liczb wynosi: " << suma;

    delete [] tab;
    return 0;
}
