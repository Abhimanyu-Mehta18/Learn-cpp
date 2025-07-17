// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

// & Creating Inline functions (fuction called below) -
/*
^ inline datatype functionName(parameters) {
    // code here
^ }
*/
inline int subtraction(int a, int b) {
    return a-b;
}

#include<iostream>
using namespace std;
int main()
{
    // * Inline functions(Function declared above (line - 39)) -
    cout << "Inline functions: " << endl;
    /* 
    ^ If we use inline function, the compiler places a copy of the code of that function
    ^ at each point where the function is called at compile time whereas in a normal function 
    ^ it goes to the memory location of that function to locate the function defination 
    ^ and then it again goes back to the main function where it is called
    ^ which takes some time. Because of this reason we use inline functions it saves some time

    ^ It is used when our program is large but the function is small(4-5 lines) which saves some time
    */
    // ^ Calling the function -
    cout << "Result: " << subtraction(5, 2) << endl;

    return 0;
}