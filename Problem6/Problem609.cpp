#include <iostream>

using namespace std;

void Nhap(int a[], int& n, int& p, int& k)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> p;
	cin >> k;
}

void XoaPhanTu(int a[], int n, int p, int k)
{
	int c[10000];
	int temp = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (i >= p && dem <= k-1)
		{
			dem++;
			if (dem == k-1)
				continue;
		}
		else
			cout << a[i] << " ";
}

int main()
{
	int a[10000], n, p, k;
	Nhap(a, n, p, k);
	XoaPhanTu(a, n, p, k);
	return 0;
}