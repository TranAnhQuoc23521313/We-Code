#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cin >> a;
    cin >> b;
    if (a==0)
    {
        if (b==0)
        {
            cout << "ℝ";
            return 0;
        }
        if (b!=0)
        {
            cout << "Ø";
            return 0;
        }
    }
    cout << "{" << -1*b/a << "}";
    return 0;
}