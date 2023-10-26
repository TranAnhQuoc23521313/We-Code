#include <iostream>

using namespace std;

void Nhap(int a[], int& n,int b[], int& m)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i];
}

void HoanVi(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void NoiMang(int a[], int n, int b[], int m)
{
    int c[10000];
    int k = 0;
    for (int i = 0; i < n; i++)
        c[k++] = a[i];
    for (int i = 0; i < m; i++)
        c[k++] = b[i];
    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (c[i] > c[j])
                HoanVi(c[i], c[j]);
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";
}

int main()
{
    int a[500], b[500], m, n;
    Nhap(a, n, b, m);
    NoiMang(a, n, b, m);
    return 0;
}