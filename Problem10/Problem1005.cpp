
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien& sv)
{
    cin.getline(sv.MASV, 10);
    cin.getline(sv.HoTen, 100);
    cin.getline(sv.NgaySinh, 12);
    cin >> sv.GioiTinh;
    cin >> sv.DiemToan;
    cin >> sv.DiemLy;
    cin >> sv.DiemHoa;
    sv.DTB = (sv.DiemToan + sv.DiemLy + sv.DiemHoa)/3;
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


int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
