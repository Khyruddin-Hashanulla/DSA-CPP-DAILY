#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Numbers
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}

// Others Pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Numbers
        for (int j = 0; j < n - i; j++)
        {
            cout << char('A' + i);
        }
        cout << endl;
    }
    return 0;
}