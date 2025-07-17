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
    // ^ Example 2 -
    
    // ^ defining variables and taking input -
    double numerator, denominator;
    cout << "Enter numerator and denominator: " << endl;
    cin >> numerator >> denominator;
    
    // ^ Exception handling - 
    try
    {
        // ^ checking if denominator given by user is 0 - 
        if (denominator == 0) {
            // ^ if yes then it will throw the denominater (Variable for user input (value = 0)) as an exception -
            throw denominator;
        }
        // ^ Displaying the value of numerator/denominator - 
        cout << "Result: " << numerator/denominator << endl;
    }
    // ^ Displaying exception - 
    catch(double d)
    {
        cout << "Exception: denominator cannot be 0: " << d;
    }
    return 0;
}