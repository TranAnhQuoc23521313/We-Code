#include <iostream>

using namespace std;

void Nhap(float a[][500],int& m,int & n)
{
    cin >> m >> n;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
}

float Trace(float a[][500],int m,int n)
{
    float s = 0;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            if (i==j)
                s+=a[i][j];
    return s;
}

int main()
{
    int n,m;
    float b[500][500];
    Nhap(b,m,n);
    cout << Trace(b,m,n);
    return 0;
}