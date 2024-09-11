#include <iostream>
using namespace std;

// Function to print all prime numbers from 2 to N
void printPrimes(int N)
{
    for (int num = 2; num <= N; num++)
    {
        bool isPrime = true;

        // Check if num is divisible by any number from 2 to num-1
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers from 2 to " << N << " are: ";
    printPrimes(N);

    return 0;
}