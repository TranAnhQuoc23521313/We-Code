#include <iostream>
#define MAXN 100
using namespace std;

struct PhanSo
{
    int Tu;
    int Mau;
};


void Nhap(PhanSo &x)
{
    cin >> x.Tu >> x.Mau;
}

void Nhap(PhanSo a[],int&n)
{
    cin >> n;
    for (int i = 0; i < n;i++)
        Nhap(a[i]);
}

int UCLN(PhanSo x)
{
    int a = abs(x.Tu);
    int b = abs(x.Mau);
    while (a*b != 0)
    {
        if (a > b)
            a -= b;
        else 
            b -= a;
    }
    return a+b;
}

PhanSo RutGon(PhanSo x)
{
    int temp = UCLN(x);
    PhanSo ketqua;
    ketqua.Tu = x.Tu/temp;
    ketqua.Mau = x.Mau/temp;
    return ketqua;
}

PhanSo KtMauAm(PhanSo x)
{
    PhanSo temp = x;
    if (x.Mau < 0)
    {
        temp.Mau = abs(x.Mau);
        temp.Tu = x.Tu*(-1);
    }
    return temp;
}

int KtRutGon(PhanSo x)
{
    if (x.Tu==0 && x.Mau != 0)
            return 0;   // Nay la luon bang 0
    if (x.Mau==0)
        return -1;   // Nay la phan so khong ton tai
    if (x.Tu%x.Mau==0)
        return 1;  // Nay la tu chia het cho mau
    if (UCLN(x)!=1)
        return 2;  // Nay rut gon duoc
    return 3; // Nay khong rut gon duoc
}

void Xuat(PhanSo x)
{
    cout << x.Tu << "/" << x.Mau;
}

void Xuat(PhanSo a[],int n)
{
    for (int i = 0; i < n;i++)
    {
        a[i]=KtMauAm(a[i]);
        switch (KtRutGon(a[i]))
        {
        case 0: cout << 0 << endl; break;
        case -1: cout << "Khong thoa yeu cau bai toan" << endl; break;
        case 1: cout << (a[i].Tu/a[i].Mau) << endl; break;
        case 2: Xuat(RutGon(a[i])); cout << endl; break;
        case 3: Xuat(a[i]); cout << endl; break;
        }
    }
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

