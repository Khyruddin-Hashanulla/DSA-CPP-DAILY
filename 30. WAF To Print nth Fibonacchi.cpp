#include <iostream>
using namespace std;

// Function to return the nth Fibonacci number using iteration
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n; // Base cases: F(0) = 0 and F(1) = 1
    }

    int a = 0, b = 1, next;

    for (int i = 2; i <= n; i++)
    {
        next = a + b; // Next Fibonacci number is the sum of the last two
        a = b;        // Update 'a' to 'b'
        b = next;     // Update 'b' to 'next'
    }

    return b; // 'b' now holds the nth Fibonacci number
}

int main()
{
    int n;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}