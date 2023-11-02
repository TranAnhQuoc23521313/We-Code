#include <iostream>
//Write your code here
int main()
{
    int x;
    std::cin >> x;
    int c = x > 0 ? x:-1*x;
    std::cout << c;
}