#include <iostream>

using namespace std;

int TongChuSo(int);

int main()
{
    int a;
    cin >> a;
    cout << TongChuSo(a);
    return 0;
}

int TongChuSo(int a)
{
    int temp = a;
    int s = 0;
    while (temp != 0)
    {
        s += temp%10;
        temp /= 10;
    }
    return s;
}