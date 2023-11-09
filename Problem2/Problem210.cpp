#include <iostream>
#include <cmath>

using namespace std;

struct Date
{
    int Ngay;
    int Thang;
    int Nam;
};
typedef struct Date DATE;

void Nhap(DATE&);
int KtNhuan(DATE);
int KtNgayTrongThang(DATE);
int KtHopLe(DATE);
void Xuat(DATE);

int main()
{
    DATE thu;
    Nhap(thu);
    int kt = KtHopLe(thu);
    if (kt == 1)
    {
        Xuat(thu);
        cout << " la ngay hop le.";
    }
    if (kt == 2)
    {
        Xuat(thu);
        cout << " la ngay khong hop le.";
    }
    if (kt == 3)
    {
        cout << "Thang khong hop le.";
    }
    if (kt == 4)
    {
        cout << "Nam khong hop le.";
    }
    return 0;
}

void Nhap(DATE& thu)
{
    cin >> thu.Ngay;
    cin >> thu.Thang;
    cin >> thu.Nam;
}

int KtNhuan(DATE thu)
{
    if (thu.Nam % 4 == 0 && thu.Nam % 100 != 0)
        return 1;
    if (thu.Nam % 400 == 0)
        return 1;
    return 0;
}

int KtNgayTrongThang(DATE thu)
{
    int NgayTrongThang[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (KtNhuan(thu)==1)
        NgayTrongThang[1] = 29;
    return NgayTrongThang[thu.Thang-1];
}

int KtHopLe(DATE thu)
{
    if (thu.Nam < 0)
        return 4;
    if (thu.Thang <= 0 || thu.Thang > 12)
        return 3;
    if (thu.Ngay < 1 || thu.Ngay > KtNgayTrongThang(thu))
        return 2;
    return 1;
}

void Xuat(DATE thu)
{
    cout << thu.Ngay << "/" << thu.Thang << "/" << thu.Nam;
}