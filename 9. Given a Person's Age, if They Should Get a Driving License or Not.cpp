#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter The Age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "They should get Driving License." << endl;
    }
    else
    {
        cout << "They should not get Driving License." << endl;
    }
}