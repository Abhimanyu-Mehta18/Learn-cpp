// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

// & Default parameters (function called below) - 
// ^ Assigning a default value to the parameter
/*
! Default parameters always goes from right to left. Eg -
! float multiplication(float a, float b, float c, float d = 1.0) (It will not throw an error)
! float multiplication(float a, float b, float c = 1.0, float d) (It will throw an error because variable d(right most parameter) is not given a default value)
*/ 
float multiplication(float a, float b, float c = 1.0, float d = 1.0) {
    return (a*b*c*d);
}

int main()
{
    // * Default parameters (function declared above (line - 49)) -
    cout << "Default parameters: "<< endl;
    /*
    ^ A default argument is a value provided in function declaration that is automatically assigned 
    ^ by the compiler if caller of the function dosen't provide a value for the argument with default value
    */
    // ^ Calling the function - 
    cout << multiplication(3, 4, 5, 6) << endl; // ^ All the arguments are assigned
    // ! cout << multiplication(4) << endl; (It will throw an error because 2nd parameter was not assigned a default value)
    cout << multiplication(2, 3, 4) << endl; // ^ It will not throw an error because 4th parameter was assigned a default value
    cout << multiplication(3, 4) << endl; // ^ It will not throw an error because 3rd and 4th parameter was assigned a default value
    return 0;
}