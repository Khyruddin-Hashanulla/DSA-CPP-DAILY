#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "This is Even Number." << endl;
    }
    else
    {
        cout << "This is Odd Number." << endl;
    }
}