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

int SoSanh(PhanSo a,PhanSo b)
{
    float ps_1=(float)a.Tu/a.Mau;
    float ps_2=(float)b.Tu/b.Mau;
    if (ps_1 == ps_2)
        return 0;
    if (ps_1 > ps_2)
        return 1;
    return -1;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
