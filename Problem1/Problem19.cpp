#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    float p = (float)(a+b+c)/2;
    float s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(2) << s;
    return 0;
}