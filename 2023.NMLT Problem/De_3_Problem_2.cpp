#include <iostream>

using namespace std;

void Nhap(int [][3],int&,int []);
bool KtCot(int a[][3],int n,int b[]);
bool KtCheo(int a[][3],int n,int b[]);
bool KtHang(int a[][3],int n,int b[]);
void Core(int a[][3],int n,int b[]);

int main()
{
    int n;
    int a[3][3];
    int b[1000];
    Nhap(a,n,b);
    if (n >= 3)
        Core(a,n,b);
    else 
        cout << "No";
    return 0;
}

void Nhap(int a[][3],int &n,int b[])
{
    for (int i = 0; i < 3;i++)
        for (int j = 0; j < 3;j++)
            cin >> a[i][j];
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> b[i];
}


bool KtCot(int a[][3],int n,int b[])
{
    for (int cot = 0; cot < 3;cot++)
    {
        int dem = 0;
        for (int q = 0; q < n;q++)
        {
            if (a[cot][0]==b[q])
                dem++;
            if (a[cot][1]==b[q])
                dem++;
            if (a[cot][2]==b[q])
                dem++;
        }
        if (dem==3)
            return true;
    }
    return false;
}

bool KtCheo(int a[][3],int n,int b[])
{
    int dem = 0;
    for (int i = 0; i < 3;i++)
    {
        for (int q = 0; q < n;q++)
            if (a[i][i]==b[q])
                dem++;
    }
    if (dem!=3)
    {
        dem = 0;
        for (int i = 0; i < 3;i++)
        {
            for (int j = 2; j >= 0; j--)
                for (int q = 0; q < n;q++)
                    if (a[i][j]==b[q] && i+j==2)
                        dem++;
        }
        if (dem == 3)
            return true;
        return false;
    }
    if (dem==3)
        return true;
    return false;
}

bool KtHang(int a[][3],int n,int b[])
{
    for (int hang = 0; hang < 3;hang++)
    {
        int dem = 0;
        for (int q = 0; q < n;q++)
            {
                if (a[0][hang]==b[q])
                    dem++;
                if (a[1][hang]==b[q])
                    dem++;
                if (a[2][hang]==b[q])
                    dem++;
            }
        if (dem==3)
            return true;
    }

    return false;
}

void Core(int a[][3],int n,int b[])
{
    if (KtHang(a,n,b)|| KtCot(a,n,b) || KtCheo(a,n,b))
    {
        cout << "Yes";
        return;
    }
    cout << "No";
    return;
}