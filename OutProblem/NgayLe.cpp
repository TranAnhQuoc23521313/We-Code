#include <iostream>

using namespace std;

struct DeBai
{
    int SoLan;
    int Thu_SoLan;
    int Thang;
    int Nam;
};

struct NGAY
{
    int NGAY;
    int Thang;
    int Nam;
};

void Nhap(DeBai& x)
{
    cin >> x.SoLan;
    cin >> x.Thu_SoLan;
    cin >> x.Thang;
    cin >> x.Nam;
}

int KtNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNGAYToiDaTrongNam(NGAY x)
{
	if (KtNhuan(x) == 1)
		return 366;
	return 365;
}

int SoNGAYToiDaTrongThang(NGAY x)
{
	int NGAYthang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (KtNhuan(x) == 1)
		NGAYthang[1] = 29;
	return NGAYthang[x.Thang - 1];
}

NGAY TimNGAY(int Nam, int stt)
{
	NGAY temp = { 1,1,Nam };
	temp.Thang = 1;
	while (stt - SoNGAYToiDaTrongThang(temp) > 0)
	{
		stt -= SoNGAYToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.NGAY = stt;
	return temp;
}

int stt(NGAY x)
{
    int sothutu = 0;
    for (int i = 1; i < x.Nam;i++)
    {
        sothutu += SoNGAYToiDaTrongNam({1,1,i});
    }
    for (int i = 1; i < x.Thang;i++)
        sothutu += SoNGAYToiDaTrongThang({1,i,1});
    return sothutu;
}


NGAY TimNgay(int Nam, int stt)
{
	NGAY temp = { 1,1,Nam };
	temp.Thang = 1;
	while (stt - SoNGAYToiDaTrongThang(temp) > 0)
	{
		stt -= SoNGAYToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.NGAY = stt;
	return temp;
}

NGAY TimNGAY(int stt)
{
	int Nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt -= sn;
		Nam++;
		NGAY temp = { 1,1,Nam };
		sn = SoNGAYToiDaTrongNam(temp);
	}
	return TimNGAY(Nam, stt);
}
void TaoMaTran(int a[][5],int thu,int thang,int nam)
{
    int k = 0;
    int a[31];
    for (int i = 1; i <= SoNGAYToiDaTrongThang({1,thang,nam});i++)
        a[k++]=i;
    for (int i = 0; i < 9;i++)
        for (int j = 0; j < 2;j++)
            a[i][j]=0;
    for (int i = thu; i <= 8;i++)
        for (int j = 3;j <= 5;j++)
            a[i][j] = 
}

int main()
{
    DeBai x;
    Nhap(x);
    int sothutu = stt({1,x.Thang,x.Nam})+1;
   // NGAY ketqua = TimNGAY(x.Nam,sothutu);
    int thu = sothutu%7+1;
    int thu_temp = thu;
    int solan = 0;
    if (thu >= x.Thu_SoLan)
        solan = 1;
    int a[9][5];
    cout << ketqua.NGAY;
    return 0;
}