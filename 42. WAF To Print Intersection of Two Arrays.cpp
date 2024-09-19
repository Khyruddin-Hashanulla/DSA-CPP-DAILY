#include <iostream>
using namespace std;
void printIntersection(int arr1[], int size1, int arr2[], int size2)
{
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    int arr1[] = {2, 5, 9, 4, 7};
    int size1 = 5;
    int arr2[] = {1, 3, 2, 7, 6, 0};
    int size2 = 6;
    printIntersection(arr1, size1, arr2, size2);
    return 0;
}