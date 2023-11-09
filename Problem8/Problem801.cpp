#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int KtHopLe(char a[],int n)
{
    for (int i = 0; i < n-1;i++)
        {
            if ('0' <= a[i] && a[i] <= '9' && a[i]!=' ')
                return 1;
        }
    return 0;
}

int main()
{
    char a[MAX];
    fgets(a,MAX,stdin);
    int i = 0,dem = 0;
    while (a[i]!='\0')
    {
        dem++;
        i++;
    }
    if (KtHopLe(a,dem)==1)
        cout << "CHUOI KHONG HOP LE.";
    else 
        cout << a;
    return 0;
}