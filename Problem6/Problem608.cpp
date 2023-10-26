#include <iostream>

using namespace std;

void Nhap(int a[],int& n,int& x)
{
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    cin >> x;
}

void XoaPhanTuX(int a[],int &n,int x)
{
    for (int i = 0; i < n;i++)
        if (a[i]!=x)
            cout << a[i] << " ";
}

int main()
{
    int a[500],m,x;
    Nhap(a,m,x);
    XoaPhanTuX(a,m,x);
    return 0;
}