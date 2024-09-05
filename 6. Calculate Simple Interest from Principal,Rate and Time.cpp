#include <iostream>
using namespace std;
int main()
{
    float principal, rate, time;
    cout << "Enter the Principal Amount : ";
    cin >> principal;
    cout << "Enter Rate of Interest : ";
    cin >> rate;
    cout << "Enter Time (in Year) : ";
    cin >> time;
    float SI = principal * rate * time / 100;
    cout << "Simple Interest = " << SI << endl;
}