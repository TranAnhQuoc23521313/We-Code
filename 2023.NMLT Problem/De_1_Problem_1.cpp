#include <iostream>

using namespace std;

void Nhap(int &n,int a[],int[]);

int main()
{
    int n;
    int a[100000],b[100000];
    Nhap(n,a,b);
    int max = a[0],min=b[0];
    int l = 0;
    for (int i = 0; i < n;i++)
    {
        if (a[i] > max)
            max = a[i];
        if (b[i] < min)
            min = b[i];
    }
    for (int i = max; i <= min;i++)
        l++;
    cout << l;
    return 0;
}

void Nhap(int &n,int a[],int b[])
{
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    for (int i = 0; i < n;i++)
        cin >> b[i];
}

