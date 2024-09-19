#include <iostream>
using namespace std;
int createNumberFromDigits(int degit[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result = result * 10 + degit[i];
    }
    return result;
}
int main()
{
    int degit[] = {2, 4, 9, 7};
    int size = 4;
    int number = createNumberFromDigits(degit, size);
    cout << "The Number is : " << number << endl;

    return 0;
}