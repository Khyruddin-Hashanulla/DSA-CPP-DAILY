#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number of a : ";
    cin >> a;
    cout << "Enter the number of b : ";
    cin >> b;
    cout << "Minimum number is : ";
    if (a < b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
}