#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout << fixed << setprecision(2) << "Chu vi: " << a*4 << endl;
    cout << fixed << "Dien tich: " << a*a;
    return 0;
}