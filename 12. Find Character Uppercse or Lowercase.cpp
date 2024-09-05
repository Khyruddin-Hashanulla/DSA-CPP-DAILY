#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any Character : ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is Lowercase.\n";
    }
    else
    {
        cout << "This is Uppercase.\n";
    }
}

// Find Character Uppercse or Lowercase using ASCII value. (a starting 65 to z 90 and A starting 97)

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any Character : ";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "This is Uppercase.\n";
    }
    else
    {
        cout << "This is Lowercase.\n";
    }
}
