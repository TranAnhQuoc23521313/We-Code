#include <iostream>
using namespace std;


int main()
{
    int temperature;
    cout<<"What is the outdoor temperature? ";
    cin>>temperature;
    cout<<endl;
    cout <<"What is your plan today? " << endl;
    cout << endl;
    if (temperature >= 33)
        cout << "Good day for swimming";
    if (24 <= temperature && temperature < 33)
        cout << "Good day for golfing";
    if (10 <= temperature && temperature < 24)
        cout << "Good day to play tennis";
    if (10 > temperature)
        cout << "Go to bed";
    return 0;
}