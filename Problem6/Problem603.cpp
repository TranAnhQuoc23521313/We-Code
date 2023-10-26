#include <iostream>

using namespace std;

void Nhap(int [],int&);
void LietKe(int [],int );

int main()
{
    int b[500],n;
    Nhap(b,n);
    LietKe(b,n);
    return 0;
}

void Nhap(int a[],int& n)
{
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
}

void LietKe(int a[],int n)
{
    int i = 1;
    while (i < n)
    {
        cout << a[i] << " ";
        i+=2;
    }
}