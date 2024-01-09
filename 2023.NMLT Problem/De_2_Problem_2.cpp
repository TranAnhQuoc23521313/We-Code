#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if ( n==2)
    {
        cout << 1;
        return 0;
    }
    int sc = 0;
    for (int i = n-1;i >= n/2;i--)
    {
        sc+=4;
    }
    cout << sc;
    return 0;
}

