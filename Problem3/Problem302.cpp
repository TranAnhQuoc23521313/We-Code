#include <iostream>

using namespace std;

void KtNguyenTo(int);

int main()
{
    int n;
    cin >> n;
    KtNguyenTo(n);
    return 0;
}

void KtNguyenTo(int n)
{
    int dem = 0;
    for (int i = 1; i <= n;i++)
        if (n%i==0)
            dem++;
    if (dem == 2)
        cout << "1";
    if (dem > 2)
        cout << "0";
    if (dem <= 1)
        cout << "-1";
}