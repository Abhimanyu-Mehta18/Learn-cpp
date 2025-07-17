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
    // ^ Example 1 - 

    // ^ defining variables, arrays and taking input - 
    int errorArr[4] = {8, 3, 7, 5};
    int indexValue;
    cout << "Enter index of the array: " << endl;
    cin >> indexValue; 
    int arrSize = sizeof(errorArr)/sizeof(errorArr[0]);
    // ^ Exception handling - 
    try
    {
        // ^ checking if index value given by user is greater than the length of the array -  
       if (indexValue >= arrSize){
            // ^ if yes then it will throw the indexValue (Variable for user input) as an exception -
           throw indexValue;
       }
        // ^ Displaying the value of array at given index  
       cout << errorArr[indexValue] << endl;
    }
    // ^ Displaying exception - 
    catch(int ex)
    {
        cout << "Exception out of range: " << ex << endl;
    }
    return 0;
}