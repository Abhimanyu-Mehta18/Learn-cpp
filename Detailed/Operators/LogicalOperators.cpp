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
    cout << "Logical operators: " << endl;
    // * Logical operators -

    bool logical_operator_true = true;
    bool logical_operator_false = false;
    // ~ And (&&) 

    cout << "And operator: " << (logical_operator_true && logical_operator_false) << endl;
    // ~ Or (||)

    cout << "Or operator: " << (logical_operator_false || logical_operator_true) << endl;
    return 0;
}