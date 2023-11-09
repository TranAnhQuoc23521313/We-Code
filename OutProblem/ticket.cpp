#include <iostream>

using namespace std;

struct DauCuoi
{
    int SoDau;
    int SoCuoi;
};
typedef struct DauCuoi DAUCUOI;

int KtHopLe(int);
int KtDoDai(int);
int TimHaiSo(int);
int TruongHop4(int,int);
int TruongHop3(int,int);
int TruongHop2(int,int);
int Ticket(int,int);

int main()
{
    int n;
    cin >> n;
    int dem = KtDoDai(n);
    if (dem == 4)
    {
        int kq = TruongHop4(n,dem);
        if (KtDoDai(kq)!=4)
            cout << 0;
        else
            cout << kq;
    }
    if (dem == 3)
    {
        int kq = TruongHop3(n,dem);
        if (KtDoDai(kq)!=4)
            cout << 0;
        else
            cout << kq;
    }
    if (dem==2)
    {
        int kq = TruongHop2(n,dem);
        if (KtDoDai(kq)!=4)
            cout << 0;
        else
            cout << kq;
    }
    return 0;
}

int KtDoDai(int n)
{
    int dem = 0;
    int temp = n;
    while (temp != 0)
    {
        dem++;
        temp /= 10;
    }
    return dem;
}

int TimHaiSo(int a)
{
    int ketqua = 0;
    for (int i = 1; i < 10; i++)
        if (0 < a-i && a-i <= 9)
            return i*10+(a-i);
    return 0;
}

int TruongHop4(int n,int dem)
{
    int a[4];
    DAUCUOI kq;
    DAUCUOI tamthoi;
    int temp = n;
    for (int i = 0; i < dem;i++)
        {
            int dv = temp % 10;
            a[i]=dv;
            temp /= 10;
        }
    tamthoi.SoDau = a[1]*10+a[0];
    tamthoi.SoCuoi = a[3]*10+a[2];
    if (tamthoi.SoCuoi == 0 || tamthoi.SoDau == 0)
        return -1;
    kq.SoDau = TimHaiSo(tamthoi.SoDau);
    kq.SoCuoi = TimHaiSo(tamthoi.SoCuoi);
    int KetQua = 0;
    if (kq.SoCuoi > kq.SoDau)
        KetQua = kq.SoDau*100+kq.SoCuoi;
    else 
        KetQua = kq.SoCuoi*100+kq.SoDau;
    return KetQua;
}

int TruongHop3(int n,int dem)
{
    int a[3];
    DAUCUOI kq;
    DAUCUOI tamthoi;
    int temp = n;
    for (int i = 0; i < dem;i++)
        {
            int dv = temp % 10;
            a[i]=dv;
            temp /= 10;
        }
    tamthoi.SoDau = a[0];
    tamthoi.SoCuoi = a[2]*10+a[1];
    if (tamthoi.SoCuoi == 0 || tamthoi.SoDau == 0)
        return -1;
    kq.SoDau = TimHaiSo(tamthoi.SoDau);
    kq.SoCuoi = TimHaiSo(tamthoi.SoCuoi);
    int KetQua = 0;
    if (kq.SoCuoi > kq.SoDau)
        KetQua = kq.SoDau*100+kq.SoCuoi;
    else 
        KetQua = kq.SoCuoi*100+kq.SoDau;
    return KetQua;
}

int TruongHop2(int n,int dem)
{
    int a[4];
    DAUCUOI kq;
    DAUCUOI tamthoi;
    int temp = n;
    for (int i = 0; i < dem;i++)
        {
            int dv = temp % 10;
            a[i]=dv;
            temp /= 10;
        }
    tamthoi.SoDau = a[0];
    tamthoi.SoCuoi = a[1];
    kq.SoDau = TimHaiSo(tamthoi.SoDau);
    kq.SoCuoi = TimHaiSo(tamthoi.SoCuoi);
    int KetQua = 0;
    if (kq.SoCuoi > kq.SoDau)
        KetQua = kq.SoDau*100+kq.SoCuoi;
    else 
        KetQua = kq.SoCuoi*100+kq.SoDau;
    return KetQua;
}

int TruongHop2_extra(int n,int dem)
{
    int SoDau = 0;
    int SoCuoi = 0;
    DAUCUOI tamthoi;
    tamthoi.SoCuoi = n/10;
    tamthoi.SoDau = n%10;
    if (tamthoi.SoDau == 0 || tamthoi.SoCuoi == 0)
        return 0;
    for (int i = 1000; i <= 9999;i++)
    {
        SoDau = (i/100)/10+(i/100)%10;
        SoCuoi = (i%100)/10+(i%100)%10;
        if (SoDau == tamthoi.SoDau && SoCuoi == tamthoi.SoCuoi)
            {
                int KetQua = (SoCuoi > SoDau) ? SoDau*100+SoCuoi:SoCuoi*100+SoDau;
                return KetQua;
            }
    return 0;
    }
}

int KtHopeLe(int n)
{
    int a[4];
    int k = 0;
    int temp = n;
    while (temp!=0)
    {
        a[k++]=temp%10;
        temp /= 10;
        return 0;
    }

}