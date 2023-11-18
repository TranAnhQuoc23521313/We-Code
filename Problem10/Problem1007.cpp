#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};


void Nhap(SinhVien& sv)
{
    cin.ignore();
    cin.getline(sv.MASV, 10);
    cin.getline(sv.HoTen, 100);
    cin.getline(sv.NgaySinh, 12);
    cin >> sv.GioiTinh;
    cin >> sv.DiemToan;
    cin >> sv.DiemLy;
    cin >> sv.DiemHoa;
    sv.DTB = (sv.DiemToan + sv.DiemLy + sv.DiemHoa)/3;
}

void Nhap(SinhVien a[],int& n)
{
    cin >> n;
    for (int i = 0; i < n;i++)
        Nhap(a[i]);
}

void Xuat(SinhVien x)
{
    cout << x.MASV << "\t";
    cout << x.HoTen << "\t";
    cout << x.NgaySinh << "\t";
    cout << x.GioiTinh << "\t";
    cout << x.DiemToan << "\t";
    cout << x.DiemLy << "\t"; 
    cout << x.DiemHoa << "\t" << setprecision(3) << x.DTB;   
//    cout << "\n07520111	Nguyen Anh Hong	07/12/1991	F	8	9	7	8";
}

void Xuat(SinhVien a[],int n)
{
    for (int i = 0; i < n;i++)
    {
        Xuat(a[i]);
        cout << endl;
    }
}

void HoanVi(SinhVien& x,SinhVien& y)
{
    SinhVien temp = x;
    x = y;
    y = temp;
}

int SoSanh(char s1[],char s2[])
{
    for (int i = 0; i < 8;i++)
    {
        if (s1[i] < s2[i])
            return 1;
        if (s1[i] > s2[i]) 
            return 2;
    }
    return 0;
}

void SapXepGiamTheoMASV(SinhVien a[],int n)
{
    for (int i = 0; i < n-1;i++)
        for (int j = i+1; j < n;j++)
        {
//            cout << a[i].MASV << " " << a[j].MASV << endl;
            if (SoSanh(a[i].MASV,a[j].MASV)==1)
            {
                swap(a[i],a[j]);
                //Xuat(a,n);
                //cout << endl;
            }
        }
}


int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
//    cout << "--------------------------------" << endl;
    Xuat(A, n);
    return 0;
}
