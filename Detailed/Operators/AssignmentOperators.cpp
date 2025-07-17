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

    cout << "Assignment operators: " << endl;
    // * Assignment operators -

    int assignment_var_1 = 10;
    int assignment_var_2 = 20;
    cout << assignment_var_1 << endl;
    // ~ (=)

    assignment_var_1 = assignment_var_2;
    cout << "Equal operator: " << assignment_var_1 << endl;
    // ~ (+=)

    assignment_var_1 += assignment_var_2;
    cout << "Plus-equal operator: " << assignment_var_1 << endl;
    // ~ (-=)

    assignment_var_1 -= assignment_var_2;
    cout << "Minus-equal operator: " << assignment_var_1 << endl;
    // ~ (*=)

    assignment_var_1 *= assignment_var_2;
    cout << "Multiplication-equal operator: " << assignment_var_1 << endl;
    // ~ (/=)

    assignment_var_1 /= assignment_var_2;
    cout << "Divison-equal operator: " << assignment_var_1 << endl;
    // ~ (%=)

    assignment_var_1 %= assignment_var_2;
    cout << "Remainder-equal operator: " << assignment_var_1 << endl;

    return 0;
}