// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;
int main()
{
    // * Simple control structures
    // ~ Conditional
    // ? If else
    cout << "Simple control structures: " << endl << "Conditional: " << endl << "If else" << endl;
    cout << "Enter a number: ";
    int user_input_number;
    cin >> user_input_number;
    if (user_input_number < 0)
    {
        cout << "Negitive" << endl;
    }
    else if (user_input_number == 0)
    {
        cout << "Zero" << endl;
    }
    else {
        cout << "Positive" << endl;
    }
    // ? Switch case
    cout << "Switch case: " << endl;
    cout << "Enter a number between 1 and 7: ";
    int week_day_user_input;
    cin >> week_day_user_input;
    switch (week_day_user_input)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }
    // ^ Calculator
    cout << "Calculator: " << endl;
    int num1;
    int num2;
    int input_operator;
    cout << "Number 1: " << endl;
    cin >> num1;
    cout << "Operator: " << endl;
    cin >> input_operator;
    cout << "Number 2: " << endl;
    cin >> num2;

    if (input_operator == 1)
    {
        cout << num1 + num2 << endl;
    }
    else if (input_operator == 2)
    {
        cout << num1 - num2 << endl;
    }
    else if (input_operator == 3)
    {
        cout << num1 * num2 << endl;
    }
    else if (input_operator == 4)
    {
        cout << num1 / num2 << endl;
    }
    else if (input_operator == 5)
    {
        cout << num1 % num2 << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}