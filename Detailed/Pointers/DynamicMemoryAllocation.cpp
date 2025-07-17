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
    // & Dynamic memory allocation -
    cout << "Dynamic memory allocation: " << endl;
    // ^ It allows to set array size dynamically during the run time rather than at compile time.
    // ^ It helps when the program dosen't know in advance about the number of items(variable values) to be stored

    // ^ Inputing the number of values to be stored in the array
    int size;
    int *ptrSize;
    cout << "Enter the number values to be in the array:" << endl;
    cin >> size;

    // ^ Inputing the values to be stored in the array
    ptrSize = new int[size];
    cout << "Enter the values to be stored in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptrSize[i];
    }
    
    // ^ Displaing the values stored in the array
    cout << "Values in the array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptrSize[i] << endl;
    }

    return 0;
}