#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	fgets(s,MAX,stdin);	//Nhap chuoi s
	Chuanhoa(s);
    cout << s << endl;
	return 0;
}

int myStrlen(char s[],int k)
{
    int dem = 0;
    int i = 0;
    while (s[i]!='\0')
    {
        dem++;
        i++;
    }
    return dem;
}

void Chuanhoa(char s[])
{
    s[myStrlen(s,0)-1] = '\0';
    int l = myStrlen(s,0)-1;
    int batdau,ketthuc; 
        for (int i = 0; i < l;i++)
        {
            if (s[i]!=' ')
            {
                batdau = i;
                break;
            }
        }
        
    for (int i = l-1;i>=0;i--)
        {
            if (s[i]!=' ')
            {
                ketthuc = i;
                break;
            }
        }

    int a[100],k = 0;
    for (int i = batdau; i <= ketthuc;i++)
        if (s[i] == ' ' && s[i+1]==' ')
        {
            a[k++]=i;  // Nhung vi tri bi du gia dau cach.
        }

    int ketthuc_temp = ketthuc;
    if (k!= 0)
    for (int vt = 0; vt < k;vt++)
    {
        myMemmove(s,a[vt],ketthuc_temp);
        ketthuc_temp--;
        //cout << s;
        if (k>=2)
            for (int j = vt+1; j < k;j++)
                {
                    //cout << "a[j]: " << a[j] << " thay doi thanh " << a[j]-1 << endl;
                    a[j]=a[j]-1;  // Sau khi da xoa dau cach thi vi tri sau do da thay doi 1 don vi nen tru 1.
                }
    }  // For nay dung de xoa dau cach du nam giua chuoi ten 

    ketthuc = ketthuc_temp;     
    for (int i = batdau;i <= ketthuc;i++)
    if ('A' <= s[i] && s[i] <= 'Z')
        s[i]+=32;    // Toan bo ve chu thuong het.

    for (int i = 0; i <= ketthuc; i++)
        s[i]=s[i+batdau];   // Tinh tien chuoi tu [batdau,ketthuc] -> [0,kethuc];

    if ('a' <= s[0] && s[0] <='z')
        s[0] = s[0]-32;  // Viet hoa chu cai dau tien trong ho

    for (int i = 0; i <= ketthuc;i++)
        if (s[i]==' ')
            s[i+1]-=32;  // Viet hoa nhung chu con lai cho dung dang.
}

void myMemmove(char s[],int vt,int k)
{
    for (int i = vt; i <= k;i++)
        s[i] = s[i+1];   // Xoa 1 khoang trong trong chuoi ten VD: "TRAN  ANH" -> "TRAN ANH"
}