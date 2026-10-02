#include <iostream>
using namespace std;

int main()
{
    char operation;
    double digit1, digit2;
    double division, addition, subtract, multiplication;

    cout << "Please Enter First Number: ";
    cin >> digit1;

    cout << "Please Enter Your Second Number: ";
    cin >> digit2;

    cout << "What Operation Do You Want? (+, -, *, /): ";
    cin >> operation;

    division = digit1 / digit2;
    addition = digit1 + digit2;
    subtract = digit1 - digit2;
    multiplication = digit1 * digit2;

    if (operation == '+')
    {
        cout << "The sum of your numbers is: " << addition;
    }
    else if (operation == '-')
    {
        cout << "The difference of your numbers is: " << subtract;
    }
    else if (operation == '*')
    {
        cout << "The result of multiplication is: " << multiplication;
    }
    else if (operation == '/')
    {
        cout << "The result of division is: " << division;
    }
    else
    {
        cout << "Invalid operation.";
    }

    return 0;
}