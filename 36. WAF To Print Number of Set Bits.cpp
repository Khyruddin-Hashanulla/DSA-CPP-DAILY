#include <iostream>
using namespace std;

// Function to count and print the number of set bits
void printSetBits(int n) {
    int count = 0;
    
    while (n > 0) {
        n = n & (n - 1); // Remove the rightmost set bit
        count++;
    }
    
    cout << "Number of set bits: " << count << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    printSetBits(num);
    
    return 0;
}