#include <iostream>

using namespace std;

void Nhap(int a[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int LonNhat(int a[], int n)
{
    int lc = a[0];
    for (int i = 1; i < n; i++)
        if (lc < a[i])
            lc = a[i];
    return lc;
}

int TanSuat(int a[], int n, int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            dem++;
    return dem;
}

void HoanVi(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int LonThuNhi(int a[], int n)
{
    int max = LonNhat(a, n);
    if (TanSuat(a, n, max) == n)
        return 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                HoanVi(a[i], a[j]);
    for (int i = 0; i < n;i++)
        if (a[i]!=max)
            return a[i];
}

int main()
{
    int a[500], n;
    Nhap(a, n);
    cout << LonThuNhi(a, n);
    return 0;
}