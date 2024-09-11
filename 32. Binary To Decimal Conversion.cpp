#include <iostream>
using namespace std;
int binaryTodec(int binaryNum)
{
    int ans = 0, pow = 1;
    while (binaryNum > 0)
    {
        int rem = binaryNum % 2;
        ans += rem * pow;
        binaryNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    int binaryNum = 1001;

    cout << binaryTodec(binaryNum) << endl;
    return 0;
}