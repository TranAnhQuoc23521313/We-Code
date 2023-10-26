
#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

int Fibo(int x)
{
    if (x < 3)
        return 1;
    int f_1 = 1;
    int f_2 = 1;
    int f;
    for (int i = 3;i <= x;i++)
    {
        f = f_1 + f_2;
        f_1 = f_2;
        f_2 = f;
    }
    return f;
}

void Nhapmang(int a[][MAX],int& n)
{
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
            a[i][j]=Fibo(i+j+1);
    }
}

void Xuatmang(int a[][MAX],int n)
{
    for (int i = 0;i < n;i++)
    {
        for (int j = 0; j < n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}


int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
    return 0;
}