#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cout << "Podaj liczbe. Sprawdze czy jest ona pierwsza: ";
    cin >> n;
    if(n<2) x=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) x=1;
        else x=0;
    }
    if(x==0)cout<<"Jest to liczba pierwsza.";
    else cout<<"To nie jest liczba pierwsza";
    return 0;
}
