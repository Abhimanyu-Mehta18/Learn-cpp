// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

int speed = 8;
// & Pass by pointer example (function called below) - 
int distanceUsingPointer(int *x, int *y) {
    *x += speed;
    return (*x)*(*y);
    // ^ In this case we are using ((*)pointers) which are directly refering to the address of the arguments
    // ^ So the value of x will reflect a change in the value of the argument passed
    // ^ because x and y are pointer variables which are pointing to the address of arguments
}

int main()
{
    // * Pass by pointers (function declared above (line - 109) -
    cout << "Pass by pointers: " << endl;
    // ! Changes made to the parameter will affect the passed argument
    int a=10;
    int b=5;
    cout << "Before: " << a*b << endl;

    // ^ &variablename means - it is the address of the given variable 
    distanceUsingPointer(&a, &b);
    cout << "After: " << a*b << endl;
    return 0;
}