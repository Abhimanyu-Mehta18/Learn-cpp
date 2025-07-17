// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

// & Pass by value example (function called below) - 
int speed = 8;
int distanceUsingValue(int x, int y) {
    x += speed;
    // ^ In this case we are changing the value of x so it should get reflelected when we call this function.
    // ^ Since we are using pass by value method for passing arguments, the x argument will not be incremented by speed variable
    // ^ Because the function in which we are calling the function goes to the address of function being called 
    // ^ and then it goes back to the address of the function it was being called. So the value of x will not reflect a change
    // ^ in the value of the argument passed
    return x*y;
}

int main()
{
    // * Pass by value (function declared above (line - 88)) -
    cout << "Pass by value: " << endl;
    // ! Changes made to the parameter will not affect the passed argument
    int a=10, b=5;
    cout << "Before: " << a*b << endl;

    distanceUsingValue(a, b);
    cout << "After: " << a*b << endl;
    // ^ CONCLUSION - no change in value because pass by value method is used for passing arguments
    return 0;
}