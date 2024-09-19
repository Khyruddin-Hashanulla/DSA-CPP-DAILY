#include <iostream>
using namespace std;

void findUniqueValues(int arr[], int size) // Function to find unique values
{
    cout << "Unique Elements Are : "; // Output statement

    // Outer loop to pick each element of the array
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true; // Assume current element is unique initially

        // Inner loop to compare the current element with every other element
        for (int j = 0; j < size; j++)
        {
            // If the element is found somewhere else (but not the same index),
            // it's not unique
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false; // Current element is not unique
                break;            // No need to check further, move to the next element
            }
        }

        // If after checking all other elements, it's still unique, print it
        if (isUnique)
        {
            cout << arr[i] << " "; // Print unique element
        }
    }
    cout << endl; // Move to next line after printing all unique elements
}

int main()
{
    int arr[] = {2, 5, 2, 7, 8, 5, 7, 9}; // Input array
    int size = 8;                         // Size of the array
    findUniqueValues(arr, size);          // Call function to find and print unique elements
    return 0;
}