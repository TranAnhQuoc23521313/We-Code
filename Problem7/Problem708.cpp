#include <iostream>

using namespace std;

void Nhap(float a[][500],int& m,int & n)
{
    cin >> m >> n;
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            cin >> a[i][j];
}

bool CheoChinh(float a[][500],int m,int n)
{
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            if (i==j&&a[i][j]!=1)
                return false;
    return true;
}

bool TamGiacTren(float a[][500],int m,int n)
{
    for (int i = 0; i < m;i++)
        for (int j = i + 1; j < n;j++)
            if (a[i][j]!=0)
                return false;
    return true;
}

float TongCotDuoiCheo(float a[][500],int m,int cot)
{
    float s = 0;
    for (int i=cot+1; i < m;i++)
        s += a[i][cot];
    return s;
}

bool TamGiacDuoi(float a[][500],int m,int n,int x)
{
    for (int i = 0; i < m;i++)
        for (int j = 0; j < n;j++)
            if (i > j && a[i][j]!=0 && j!=x)
                return false;
    return true;
}

bool Frobenius(float a[][500],int m,int n)
{
    if(CheoChinh(a,m,n))
    {
        if (TamGiacTren(a,m,n))
        {
            int dem = 0;
            int ChuY;
            for (int j = 0; j < n;j++)
            {
                if (TongCotDuoiCheo(a,m,j)!=0)
                    {
                        dem++;
                        ChuY = j;
                    }
                if (dem == 2)
                    return false;
            }
            if (TamGiacDuoi(a,m,n,ChuY))
                return true;
            return false;
        }
        return false;
    }
    return false;
}

int main()
{
    int n,m;
    float b[500][500];
    Nhap(b,m,n);
    if (Frobenius(b,m,n))
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}