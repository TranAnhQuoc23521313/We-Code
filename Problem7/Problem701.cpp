#include <iostream>

using namespace std;

void Nhap(float a[][500],int& m,int& n)
{
    cin >> m >> n;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
}

void Xuat(float a[][500],int m,int n)
{
    for (int i = 0; i < m;i++)
    {
        for (int j = 0; j < n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    float b[500][500];
    int m,n;
    Nhap(b,m,n);
    Xuat(b,m,n);
    return 0;
}