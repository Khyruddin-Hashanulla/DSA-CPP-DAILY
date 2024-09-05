#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char operation;
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        cout << "Enter the First number : ";
        cin >> num1;
        cout << "Enter an operator(+,-,/,*):";
        cin >> operation;
        cout << "Enter the Second number : ";
        cin >> num2;
        switch (operation)
        {
        case '+':
            cout << "Result : " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result : " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result : " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
            {
                cout << "Result : " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
        }
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    }
    cout << "Calculator exited." << endl;
    return 0;
}