#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Podaj liczbe a i b, z ktorych chcesz obliczyc NWD: ";
    cin>>a>>b;
    while((a*b)!=0)
        {
        if(a>b)a%=b;
        else if(b>a)b%=a;
        else if(a==b)return 1;
        }
    if(a>b) cout<<"NWD tych liczb to: "<<a;
    else cout<<b;
    return 0;
}
