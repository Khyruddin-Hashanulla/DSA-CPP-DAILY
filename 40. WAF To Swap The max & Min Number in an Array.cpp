#include <iostream>
using namespace std;
void swapMaxMin(int arr[], int size)
{
    int maxIndex = 0, minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);
}
int main()
{
    int arr[] = {2, 7, 4, 9, 6, 1, 8, 5};
    int size = 8;
    cout << "Original Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    swapMaxMin(arr, size);
    cout << "Array after swapping max and min: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
