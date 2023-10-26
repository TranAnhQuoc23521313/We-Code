#include <iostream>

using namespace std;

void Nhap(float a[][500],int& m,int & n)
{
    cin >> m >> n;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
}

void MaTranChuyenVi(float a[][500],int m,int n)
{
    for (int j =0; j < n;j++)
    {
        for (int i = 0; i < m;i++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int n,m;
    float b[500][500];
    Nhap(b,m,n);
    MaTranChuyenVi(b,m,n);
    return 0;
}