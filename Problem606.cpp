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


int main()
{
    int a[500], n;
    Nhap(a, n);
    cout << LonNhat(a,n) << endl;
    cout << TanSuat(a, n,LonNhat(a,n));
    return 0;
}