#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Ngay
{
    char Ngay[2];
    char Thang[2];
    char Nam[1000];
};

void CatXau(char[],Ngay&);

int main()
{
    char Date[100];
    fgets(Date,100,stdin);
    Date[strlen(Date)-1]='\0';
    Ngay DATES;
    CatXau(Date,DATES);
    cout << DATES.Nam << endl;
    cout << DATES.Thang << endl;
    cout << DATES.Ngay;
    return 0;
}

void CatXau(char h[],Ngay& x)
{
    int a[2],k=0;
    for (int i = 0; i < strlen(h)-1;i++)
    {
        if (h[i]==' ')
        {
           // cout << i;
            a[k++]=i;
        }
    }
    strncpy(x.Nam,h+0,a[0]);
    strncpy(x.Thang,h+a[0]+1,2);
    strncpy(x.Ngay,h+a[1]+1,2);
}

//0001 01 01