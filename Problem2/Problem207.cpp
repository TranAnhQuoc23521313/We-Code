#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&,float&,float&);
void PhuongTrinhBacHai(float,float,float);

int main()
{
    float a,b,c;
    Nhap(a,b,c);
    PhuongTrinhBacHai(a,b,c);
    return 0;
}

void Nhap(float& a,float& b,float& c)
{
    cin >> a;
    cin >> b;
    cin >> c;
}

void PhuongTrinhBacHai(float a,float b,float c)
{
    float delta = b*b -4*a*c;
    if (delta < 0)
    {
        cout << "PTVN";
    }
    if (delta == 0)
    {
            cout << "PT co nghiem kep: x1 = x2 = " << -1*b/(2*a)+0;
    }
    if (delta > 0)
    {
        float x1 = (-1*b+sqrt(delta))/(2*a);
        float x2 = (-1*b-sqrt(delta))/(2*a);
        cout << "PT co hai nghiem phan biet:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    }
}