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
    cout << "Relational/Comparison operators: " << endl;
    // * Relational/Comparison operators -
    int relationl_var_1 = 10;
    int relationl_var_2 = 20;
    // ~ Equal to (==)

    cout << "Equal to operator: " << (relationl_var_1 == relationl_var_2) << endl;
    // ~ Not equal to (!=)

    cout << "Not equal to operator: " << (relationl_var_1 != relationl_var_2) << endl;
    // ~ Greater than (>)

    cout << "Greater than operator: " << (relationl_var_1 > relationl_var_2) << endl;
    // ~less than (<)

    cout << "less than operator: " << (relationl_var_1 < relationl_var_2) << endl;
    // ~ greater than or equal to(>=)

    cout << "Greater than or equal to operator: " << (relationl_var_1 >= relationl_var_2) << endl;
    // ~ less than or Equal to (<=)

    cout << "Less than or equal to operator: " << (relationl_var_1 <= relationl_var_2) << endl;

    // ^ Greatest number (simple example program)
    cout << "Enter 3 numbers to find the greatest number among them: " << endl;

    int n1;
    int n2;
    int n3;
    cout << "Number 1: " << endl;
    cin >> n1;
    cout << "Number 2: " << endl;
    cin >> n2;
    cout << "Number 3: " << endl;
    cin >> n3;
    if (n1 > n2) {
        if (n1 > n3) {
            cout << "Greatest number: " << n1 << endl;
        }
        else if (n1 == n3) {
            cout << "Greatest number: " << n1 << " and " << n3 << endl;
        }
        else {
            cout << "Greatest number: " << n3 << endl;
        }
    }
    else if (n2 > n3) {
        if (n2 > n1) {
            cout << "Greatest number: " << n2 << endl;
        }
        else if (n2 == n1) {
            cout << "Greatest number: " << n2 << " and " << n1 << endl;
        }
        else {
            cout << "Greatest number: " << n1 << endl;
        }
    }
    else if (n3 > n1) {
        if (n3 > n2) {
            cout << "Greatest number: " << n3 << endl;
        }
        else if (n3 == n2) {
            cout << "Greatest number: " << n3 << " and " << n2 << endl;
        }
        else {
            cout << "Greatest number: " << n2 << endl;
        }
    }
    else {
        cout << "Greatest number: " << n1 << ", " << n2 << " and " << n3 << endl;
    }

    return 0;
}