// c++ code for basic calculator
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char sign;
    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number " << endl;
    cin >> num2;
    cout << "press '+' for addition" << endl
         << "press '-' for subtaction" << endl
         << "press '*' for multiplication" << endl
         << "press '/' for division" << endl
         << "press '%' for remainde" << endl;
    cin >> sign;
    switch (sign)
    {
    case '+':
        cout << "sum of " << num1 << " and " << num2 << " is " << num1 + num2;
        break;
    case '-':
        cout << "subtaction of " << num1 << " and " << num2 << " is " << num1 - num2;
        break;
    case '*':
        cout << "multiplication of " << num1 << " and " << num2 << " is " << num1 * num2;
        break;
    case '/':
        cout << "division of " << num1 << " and " << num2 << " is " << num1 / num2;
        break;
    case '%':
        cout << "remainder of " << num1 << " and " << num2 << " is " << num1 % num2;
        break;
    default:
        cout << "invalid choice";
    }
    return 0;
}
