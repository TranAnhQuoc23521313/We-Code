#include <iostream>

using namespace std;

int reverse(int n)
{
    int daonguoc = 0;
    int temp = n;
    while (temp!=0)
    {
        daonguoc = daonguoc*10+temp%10;
        temp /= 10;
    }
    return daonguoc;
}


int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
