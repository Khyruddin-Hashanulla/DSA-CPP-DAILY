#include <iostream>
using namespace std;
int sumOfDegits(int n)
{
    int degitSum = 0;
    while (n > 0)
    {
        int lastDegit = n % 10;
        n = n / 10;
        degitSum += lastDegit;
    }
    return degitSum;
}
int main()
{
    cout << "Sum of Degit is : " << sumOfDegits(2354) << endl;
    return 0;
}