#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Also You can Print Star

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

// Also You can Print Character

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}

// Others Type

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Any Number : ";
    cin >> n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}