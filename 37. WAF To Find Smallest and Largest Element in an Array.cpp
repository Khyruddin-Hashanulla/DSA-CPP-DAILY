#include <iostream>
using namespace std;
int findSmallestEle(int arr[], int size)
{
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int findLargestEle(int arr[], int size)
{
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[] = {4, 1, 2, 6, 18, 5, 8};
    int size = 7;
    int smallest = findSmallestEle(arr, size);
    cout << "The smallest element in the array is: " << smallest << endl;
    int largest = findLargestEle(arr, size);
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}