#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the Number of a : ";
    cin >> a;
    cout << "Enter the Number of b : ";
    cin >> b;
    if (a > b)
    {
        cout << "The Maximum Number is " << a << endl;
    }
    else
    {
        cout << "The Maximum Number is " << b << endl;
    }
}