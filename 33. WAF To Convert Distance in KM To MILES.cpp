#include <iostream>
using namespace std;

// Function to convert kilometers to miles
float kmToMile(int km)
{
    return km * 0.621371; // Direct conversion using the constant factor
}

int main()
{
    int km;

    cout << "Enter Distance in KM: ";
    cin >> km;
    kmToMile(km);
    cout << km << " KM = " << kmToMile(km) << " Miles" << endl;

    return 0;
}