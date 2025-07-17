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
    // & Pointers -
    cout << "Pointers" << endl;
    // ^ Pointer is a variable which stores the address of another variable
    // ^ Creating a variable which address will be stored in pointer variable below
    double var = 5;
    // ^ Syntax - datatype *pointername;
    // ! Use same datatype or else it will throw an error
    // ^ pointer takes only 2 bytes of space in the memory
    double *pointerVar;
    // ^ syntax - &variablename, use - it is the address of the given variable 
    cout << &var << endl;
    // ^ assigning the variable address to pointer variable
    pointerVar = &var;
    cout << "Before:- " << endl;
    cout << "Variable value: " << var << endl;
    cout << "Pointer address: " << pointerVar << endl;
    // ^ using * before pointerVar to get the value stored inside the variable var
    cout << "Pointer value: " << *pointerVar << endl;

    // ^ Changing the value of variable using pointer variable
    *pointerVar = 10;
    cout << "After:- " << endl;
    cout << "Variable value: " << var << endl;
    cout << "Pointer address: " << pointerVar << endl;
    cout << "Pointer value: " << *pointerVar << endl;
    cout << "Size of normall variable: " << sizeof(var) << endl << "Size of pointer variable: " << sizeof(pointerVar) << endl;
    return 0;
}