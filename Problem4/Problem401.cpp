
#include <iostream>
using namespace std;

int Input()
{
    int a;
    cin >> a;
    return a;
}

int sum_even_divisor(int n)
{
    int s = 0;
    for (int i = 1; i <= n;i++)
        if(n%i==0 && i%2==0)
            s+=i;
    if (s > 0)
        return s;
    if (s == 0)
        return -1;
}

main() {
	int n;
	n=Input();
	cout << sum_even_divisor(n);
}
