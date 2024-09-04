#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any Number : ";
    cin >> n;
    int sum = 0, count = 1;
    while (count <= n)
    {
        sum += count;
        count++;
    }
    cout << "Sum of the Number from 1 to N is : " << sum << endl;
}