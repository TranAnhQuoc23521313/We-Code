
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

bool KtNguyenTo(int x)
{
    if (x <= 1)
        return false;
    int dem = 0;
    for (int i = 1; i <= x; i++)
        if (x % i == 0)
            dem++;
    return (dem == 2);
}

void NhapmangSNT(int a[], int& n)
{
    cin >> n;
    int nguyento = 0;
    int dem = 0;
    int k = -1;
    while (true)
    {
        if (KtNguyenTo(nguyento))
        {
            k++;
            a[k] = nguyento;
        }
        nguyento++;
        if (k == n - 1)
            break;
    }
}


bool KtChuaY(int x, int y)
{
    int temp = x;
    while (temp != 0)
    {
        if (temp % 10 == y)
            return true;
        temp /= 10;
    }
    return false;
}

int SoPhanTuChuaY(int a[], int n, int y)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (KtChuaY(a[i], y))
            dem++;
    return dem;
}


int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}