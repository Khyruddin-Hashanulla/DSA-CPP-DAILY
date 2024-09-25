#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 9, 5, 3, 6, 8};
    int target = 6;

    int index = 0; // Variable to track the index
    for (int val : arr)
    {
        if (val == target)
        {
            cout << "Value: " << val << ", Index: " << index << endl;
        }
        index++; // Increment index in every iteration
    }

    return 0;
}