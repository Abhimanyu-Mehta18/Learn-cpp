// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

int speed = 8;

// & Pass by reference example (function called below) - 
int distanceUsingRefrence(int &x, int &y) {
    // ^ In this case we are using (& (reference)) to give new names to the both parameters 
    // ^ So the value of x will reflect a change in the value of the argument passed
    // ^ Because x and y are going to be new names of the argument we pass
    x += speed;
    return x*y;
}


int main()
{
    // * Pass by reference (function declared above (line - 100)) - 
    cout << "Pass by reference: " << endl;
    // ! Changes made to the parameter will affect the passed argument
    int a=10;
    int b=5;
    cout << "Before: " << a*b << endl;

    distanceUsingRefrence(a, b);
    cout << "After: " << a*b << endl;
    return 0;
}