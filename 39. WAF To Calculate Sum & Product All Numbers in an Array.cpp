#include <iostream>
using namespace std;
int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int calculateProduct(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int arr[] = {3, 4, 2, 5, 8, 7};
    int size = 6;
    cout << "Sum of All Number in Array : " << calculateSum(arr, size) << endl;
    calculateProduct(arr, size);
    cout << "Product of All Number in Array : " << calculateProduct(arr, size) << endl;

    return 0;
}