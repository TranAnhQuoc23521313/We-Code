#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(double a[][500],int& m,int& n)
{
    cin >> m >> n;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
}

double LonNhatCot(double a[][500],int m,int n,int c)
{
    float lc = a[0][c];
    for (int i = 0;i < m;i++)
        if (lc < a[i][c])
            lc = a[i][c];
    return lc;
}

void LonNhat(double a[][500],int m,int n)
{
    for (int j = 0; j < n;j++)
    {
        cout << "Gia tri lon nhat tren cot " << j << " la: " << LonNhatCot(a,m,n,j) << endl;
    }
}

int main()
{
    double b[500][500];
    int m,n;
    Nhap(b,m,n);
    LonNhat(b,m,n);
    return 0;
}
