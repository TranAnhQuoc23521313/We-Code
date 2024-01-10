#include <iostream>

using namespace std;

void Nhap(int&,int[]);

int main()
{
    int n;
    int a[10000];
    Nhap(n,a);
    int T = 0;
    for (int i = 0; i < n;i++)
        T+=a[i]/n;
    cout << T;
    return 0;
}

void Nhap(int &n,int a[])
{
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
}