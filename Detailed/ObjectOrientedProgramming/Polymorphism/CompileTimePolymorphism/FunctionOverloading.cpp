// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

// & Function overloading (function called below) -

// * Different types of parameters
int division(int a, int b) {
    cout << "Both integer: ";
    return a/b;
} 
double division(double a, double b) {
    cout << "Both double: ";
    return a/b;
}

// * Different number of parameters
int division(int a, int b, int c) {
    cout << "Three integers: ";
    return ((a/b)/c);
}

// * Different sequence of parameters
double division(int a, double b) {
    cout << "one integer and one double: ";
    return a/b;
}
double division(double a, int b)  {
    cout << "one integer and one double: ";
    return a/b;
}


int main()
{
    // * Function overloading (Functions declared above (line - 60)) -
    cout << "Function overloading: " << endl;
    /*
    ^ Function overloading is a feature in C++ where 2 or more functions can have the same name but different parameters
    ! An overloaded function must have -
    ! 1. Different type of parameters
    ! 2. Diffetent number of parameters
    ! 3. Different sequence of parametes
    */
    // ^ Calling the functions - 
    cout << division(8, 2) << endl;
    cout << division(8.88, 2.22) << endl;
    cout << division(16, 2, 4) << endl;
    cout << division(10, 2.5) << endl;
    cout << division(8.888, 2) << endl;

    return 0;
}