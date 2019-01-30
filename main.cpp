#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    if(n<2) x=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) x=1;
        else x=0;
    }
    if(x==0)cout<<"TAK";
    else cout<<"NIE";
    return 0;
}
