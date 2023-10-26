#include <iostream>

using namespace std;

void Nhap(float a[][500],int& m,int & n,float b[][500],int& k,int& l)
{
    cin >> m >> n;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
    cin >> k >> l;
    for (int i = 0; i < k;i++)
        for (int j = 0; j < l;j++)
            cin >> b[i][j];
}

float Tinh(float a[][500],int n,int dong, float b[][500],int cot)
{
    float t = 0;
    for (int j = 0; j < n;j++)
    {
        t+=a[dong][j]*b[j][cot];
    }
    return t;
}

void TinhToan(float a[][500],int m,int n, float b[][500],int l)
{
    for (int i = 0; i < m;i++)
    {
        for (int j = 0; j < l;j++)
            cout << Tinh(a,n,i,b,j) << " ";
        cout << endl;
    }
}

int main()
{
    float c[500][500],d[500][500];
    int m,n,k,l;
    Nhap(c,m,n,d,k,l);
    TinhToan(c,m,n,d,l);
    return 0;
}