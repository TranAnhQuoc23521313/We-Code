#include <iostream>

using namespace std;

int daonguoc = 0;
int reverse(int& n)
{
    if (n != 0)
    {
        daonguoc = daonguoc*10 + n%10;
        n = n/10;
        return reverse(n);
    }
    return daonguoc;
}


int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
