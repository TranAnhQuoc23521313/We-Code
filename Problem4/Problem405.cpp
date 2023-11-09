#include <iostream>

void input(int& a)
{
    std::cin >> a;
}

int TongChuSo(int a)
{
    int s = 0, temp = a;
    while (temp!=0)
    {
        s += temp%10;
        temp /=10;
    }
    return s;
}

int main() {
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
