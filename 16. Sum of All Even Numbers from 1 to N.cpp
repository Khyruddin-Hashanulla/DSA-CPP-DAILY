#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    int oddSum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            oddSum += i;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Odd Sum is : " << oddSum << endl;
}