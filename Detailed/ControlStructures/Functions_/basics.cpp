// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

// & Creating functions(functions called below (line - 332)) - 
/* 
^ Syntax - returntype functionname(parameters) {
    // CODE HERE
^ } 
*/
// ! Void returns nothing
// ! other datatypes returns the given value
int additionReturn(int a, int b) {
    // ^ Returns the sum of a and b
    return a+b;
}
void additionNoReturn(int a, int b) {
    // ^ Displays the sum of a and b
    cout << a+b << endl;
}
string greetingReturn(string a, string b) {
    // ^ Returns the string created by the concatination of a and b
    return a+b;
}
void greetingsNoReturn(string a, string b) {
    // ^ Displays the string created by the concatination of a and b
    cout << a + b << endl;
}


int main()
{
    // * Functions
    cout << "Functions: " << endl;
    // ^ function decelared above main function (line - 14)
    // ^ We use void if we do not want to return something and we will not be able to store the value from the operation peformed in a variable
    // ^ We use another datatypes to return something and we will be able to store the value from the operation performed in a variable
    // ^ Calling the functions -
    additionReturn(2, 5); // ^ It will not print anything because we are not displaying it insted we are fetching the value the function returned
    cout << additionReturn(2, 5) << endl; // ^ Now it will print because we are displaying the returned value
    cout << "Value: " << additionReturn(2, 5) * 2 << endl; // ^We can also peform different operations on this becuase it only returns the value and not displays it
    int sum = additionReturn(2, 5); // ^ We can store it in a variable
    additionNoReturn(5, 2); // ^ It will print the sum of both numbers because it returned nothing insted it printed the sum 
    // ! cout << addtionNoReturn << endl; - It will throw an error because we are just displaying the sum in the function and not returning the value
    // ! we also cannot store it in a variable because it is displaying the sum and not storing it in a variable
    // ! we also cannot peform different operations on the value because it is displaying the sum and not storing it in a variable
    /* 
    ! CONCLUSION - we will most probably use the function which returns the value because 
    ! we will be able to update the value and also we can store it in other variable
    */ 
    greetingReturn("Hello ", "Abhi"); // ^ It will not print anything because we are not displaying it insted we are fetching the value the function returned
    cout << greetingReturn("Hello ", "Abhi") << endl; // ^ Now it will print because we are displaying the returned value
    // ^ We can also update the value by concatinating the string in the cout statement
    greetingsNoReturn("Hello", "Abhi"); // ^ It will print the greetings because it returned nothing insted it printed the greetings
    // ^ We cannot update the value by concatinating the string in the cout statement 
    /*
    ! CONCLUSION - we will most probably use the function which will not return anything because
    ! we dont need to store the value in a variable or update the value we just want to display it as it is 
    */
    return 0;
}