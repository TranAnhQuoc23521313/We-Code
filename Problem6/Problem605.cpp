#include <iostream>

using namespace std;

void Nhap(int a[], int& n, int& gt, int& vt)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> gt;
    cin >> vt;
}

void ThemPhanTu(int a[], int& n, int gt, int vt)
{
    for (int i = n; i > vt; i--)
        a[i] = a[i - 1];
    a[vt] = gt;
    n++;
}

void Xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[500], n, vt, gt;
    Nhap(a, n, gt, vt);
    ThemPhanTu(a, n, gt, vt);
    Xuat(a, n);
    return 0;
}