#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
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
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
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
        for (int j = 0; j < i + 1; j++)
        {
            cout << char('A' + i) << " ";
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
        int count = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}