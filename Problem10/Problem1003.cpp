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

PhanSo Cong(PhanSo a,PhanSo b)
{
    PhanSo temp;
    a = KtMauAm(a);
    b = KtMauAm(b);
    temp.Tu = a.Tu*b.Mau + b.Tu*a.Mau;
    temp.Mau = a.Mau*b.Mau;
    int rutgon = UCLN(temp);
    if (rutgon == 1)
        return temp;
    temp.Tu=temp.Tu/rutgon;
    temp.Mau=temp.Mau/rutgon;
    return temp;
}

void Xuat(PhanSo a)
{
    if (a.Mau==1)
    cout << a.Tu;
    if (a.Mau != 1)
    cout << a.Tu << "/" << a.Mau;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    //Xuat(KtMauAm({3,-1}));
    return 0;
}
