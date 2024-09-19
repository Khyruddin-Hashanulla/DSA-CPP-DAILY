#include <iostream>
using namespace std;
int degitsToInteger(int n)
{
    int integer = 0;
    int multiplier = 1;
    while (n > 0)
    {
        int lastDegit = n % 10;
        n = n / 10;
        integer = lastDegit * multiplier + integer;
        multiplier *= 10;
    }
    return integer;
}
int main()
{
    int n;
    cout << "Enter An Integer : ";
    cin >> n;
    degitsToInteger(n);
    cout << n << " To Interger = " << degitsToInteger(n) << endl;

    return 0;
}