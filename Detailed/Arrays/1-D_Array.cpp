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
    // * Single dimensional arrays - 
    cout << "1-D Arrays: " << endl;

    // ^ Method 1 (Assigning values at the same time when declaring the variable) - datatype name[size] = {value, value, ....};
    cout << "Method 1" << endl;
    int arrInt[4] = {11, 12, 13, 14};
    cout << arrInt[2] << endl;
    /* 
    ^ Method 2 (Assigning values after declaring the variable) - 
    ^ datatype name[size];
    ^ name[index] = value;
    */
    cout << "Method 2" << endl;
    double arrDouble[2];
    arrDouble[0] = 21.21;
    arrDouble[1] = 22.22;
    cout << arrDouble[1] << endl << arrDouble[0] << endl;
    // * Length of an array - 
    cout << "Length of the array: " << endl;
    int arrLength = sizeof(arrDouble)/sizeof(arrDouble[0]);
    cout << arrLength << endl;

    // * Adding, subtracting, multipling arrays -
    cout << "Addition of 2 arrays: " << endl;
    // ^ Defining arrays
    
    int arr1[3];
    int arr2[3];
    // ^ Inputing values in array 1

    cout << "Enter values for array 1" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }
    // ^ Inputing values in array 2

    cout << "Enter values for array 2" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }
    // ^ Adding both arrays -

    // ! change the signs to +, -, * for peforming different operations  
    cout << "Sum = " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] + arr2[i] << endl;
    }
    return 0;
}