#include <iostream>
using namespace std;

void checkPrime(int n)
{
    if (n <= 1)
    {
        cout << "It is Non-Prime Number." << endl;
        return;
    }

    for (int i = 2; i <= (n - 1); i++)
    {
        if (n % i == 0)
        {
            cout << "It is Non-Prime Number." << endl;
            return;
        }
    }
    cout << "It is Prime Number." << endl;
}

int main()
{
    checkPrime(7);

    return 0;
}