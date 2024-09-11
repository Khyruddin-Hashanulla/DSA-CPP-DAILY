#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;

    cout << "Enter a positive integer N: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }

    cout << "The sum of all numbers divisible by 3 from 1 to " << N << " is: " << sum << endl;

    return 0;
}