#include <iostream>

using namespace std;

void Nhap(float a[][500],int& m,int & n)
{
    cin >> m >> n;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
}

bool MaTranDoiXung(float a[][500],int m,int n)
{
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            {
                if (i!=j && a[i][j]!=a[j][i])
                    return false;
            }
    return true;
}

int main()
{
    int n,m;
    float b[500][500];
    Nhap(b,m,n);
    if (MaTranDoiXung(b,m,n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}