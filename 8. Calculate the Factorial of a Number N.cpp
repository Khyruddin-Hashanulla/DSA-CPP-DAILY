#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;

    return 0;
}