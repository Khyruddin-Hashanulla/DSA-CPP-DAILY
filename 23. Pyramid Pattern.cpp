#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Space : n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Number1 : 1 to (i+1)
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // Number2 : i
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}