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
    // * 2 dimensional arrays -
    cout << "2-D arrays" << endl;
    // ^ Method 1 - 
    cout << "Method 1" << endl;
    int arr2D[2][2];
    arr2D[0][0] = 1;
    arr2D[0][1] = 3;
    arr2D[1][1] = 2;
    arr2D[1][0] = 4;
    cout << arr2D[0][0] << endl << arr2D[1][1] << endl << arr2D[1][0] << endl << arr2D[0][1] << endl;
    cout << "Method 2" << endl;
    // ^ Method 2 - 
    int arr2D_1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << arr2D_1[1][1] << endl;
    cout << "Method 3" << endl;
    // ^ Method 3 -
    int arr2D_2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr2D_2[1][1] << endl;

    cout << "Displaying 2-D array: " << endl;

    // ^ Displaying 2-D array

        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2D_2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Inputing and displaying 2-D array: " << endl;
    // ^ Inputing and displaying 2-D array - 
    cout << "Enter values for 2-D array: " << endl;
    int arr2D_3[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2D_3[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2D_3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}