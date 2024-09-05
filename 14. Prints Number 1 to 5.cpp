// USING WHILE LOOP

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any Number : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
}

// USING FOR LOOP

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any Number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}