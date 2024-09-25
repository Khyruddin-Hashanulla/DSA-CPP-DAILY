#include <iostream>
#include <vector>
using namespace std;
void ReverseNumber(vector<int> &arr, int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void PrintVector(const vector<int> &arr)
{
    for (int val : arr)
    {
        cout << val << " ";
    }
}
int main()
{
    vector<int> arr = {2, 5, 6, 9, 3};
    int size = arr.size();
    ReverseNumber(arr, size);
    PrintVector(arr);
    return 0;
}