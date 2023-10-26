#include <iostream>

using namespace std;

void Nhap(int [],int&);
void LietKe(int [],int);
bool KtNguyenTo(int);

int main()
{
    int a[500],n;
    Nhap(a,n);
    LietKe(a,n);
    return 0;
}

void Nhap(int a[],int& n)
{
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
}

bool KtNguyenTo(int x)
{
    int dem = 0;
    for (int i = 1; i <= x;i++)
        if (x%i==0)
            dem++;
    return (dem==2);
}

void LietKe(int a[],int n)
{
    int dem = 0;
    for (int i = 0;i < n;i++)
        if (KtNguyenTo(a[i]))
            {
                dem++;
                cout << a[i] << " ";
            }
    if (dem==0)
        cout << "0";
}