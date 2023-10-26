
#include <iostream>
using namespace std;
#define MAX 100


void Nhapmang(int a[],int n)
{
    for (int i = 0; i < n;i++)
        cin >> a[i];
}

int ChuSoDauTien(int x)
{
    int temp = x;
    int dn;
    while (temp != 0)
    {
        dn = temp % 10;
        temp /= 10;
    }
    return dn;
}

bool isBenford(int a[],int n)
{
    int dem_1 = 0;
    int dem_4 = 0;
    for (int i = 0; i < n;i++)
    {
        if (ChuSoDauTien(a[i])==1)
            dem_1++;
        if (ChuSoDauTien(a[i])==4)
            dem_4++;
    }
    if (dem_1==3 && dem_4==1)
        return true;
    return false;
}



int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
