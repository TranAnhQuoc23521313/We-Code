#include <iostream>

using namespace std;

struct PhanSo 
{
    int Tu;
    int Mau;
};

void Nhap(PhanSo &a)
{
    cin >> a.Tu >> a.Mau;
}

PhanSo Nhap()
{
    PhanSo a;
    cin >> a.Tu >> a.Mau;
    return a;
}

int UCLN(PhanSo x)
{
    int a = abs(x.Tu);
    int b = abs(x.Mau);
    while (a*b!=0)
    {
        if(a>b) a-=b;
        else b-=a;
    }
    return a+b;
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

PhanSo Chia(PhanSo a,PhanSo b)
{
    PhanSo temp;
    a = KtMauAm(a);
    b = KtMauAm(b);
    if (a.Tu == 0 || b.Tu == 0)
        return {0,0};
    temp.Tu = a.Tu*b.Mau;
    temp.Mau = a.Mau*b.Tu;
    int rutgon = UCLN(temp);
    if (rutgon == 1)
        return temp;
    temp.Tu=temp.Tu/rutgon;
    temp.Mau=temp.Mau/rutgon;
    PhanSo Ketqua = KtMauAm(temp);
    return Ketqua;
}

void Xuat(PhanSo a)
{
    if (a.Mau==1)
    cout << a.Tu;
    if (a.Mau != 1 && a.Tu != 0)
    cout << a.Tu << "/" << a.Mau;
    if (a.Tu == 0)
    cout << 0;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Chia(a, b));
    return 0;
}
