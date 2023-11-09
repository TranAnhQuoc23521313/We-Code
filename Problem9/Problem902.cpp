#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float a[],int& n)
{
    cin >> n;
    for (int i = 0; i < n;i++)
            cin >> a[i];
}

float LonNhat(float a[],int n)
{
    int lc = a[0];
    for (int i = 0; i < n;i++)
            if (a[i] > lc)
                lc = a[i];
    return lc;
}

int TanSuat(float a[],int n,float x)
{
    int dem = 0;
    for (int i = 0; i < n;i++)
            if (a[i]==x)
                dem++;
    return dem;
}

void Max(float a[],int n)
{
    float lc = LonNhat(a,n);
    cout << lc << endl;
    cout << TanSuat(a,n,lc);
}

int main()
{
    float b[500];
    int n;
    Nhap(b,n);
    Max(b,n);
    return 0;
}
