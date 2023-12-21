#include <iostream>
using namespace std;


int main()
{
    int age; cin>>age;
    char gender; cin>>gender;
    if (gender == 'f' || gender == 'F')
    {
        if (age >= 21)
            cout << "2";
        if (age < 21)
            cout << "4";
    }
    else if (gender == 'm' || gender == 'M')
    {
        if (age >= 21)
            cout << "1";
        if (age < 21)
            cout << "3";
    }
    else 
        cout << "I do not know why";
    return 0;
}