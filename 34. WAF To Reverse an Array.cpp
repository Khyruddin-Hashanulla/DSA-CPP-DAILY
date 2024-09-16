#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << "Original Array :";
    displayArray(arr, size);
    reverseArray(arr, size);
    cout << "Reverse Array :";
    displayArray(arr, size);
    return 0;
}