#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    int i = 2;
    while (i <= (n - 1))
    {
        if (n % i == 0)
        {
            cout << "It is Non-Prime Number." << endl;
            break;
        }
        else
        {
            i++;
        }
        cout << "It is Prime Number." << endl;
        break;
    }
}