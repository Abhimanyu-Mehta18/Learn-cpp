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
    // & Displaying stuff -

    cout << "Displaying stuff" <<endl;
    // & Concatination -

    cout << "concatination: " << 1 << ", " << 1.1 << ", " << 'A'<< endl;

    // & Input -

    cout << "What is your name: "; 
    string name;
    cin >> name;
    cout << "Your first name is: " << name << endl;
    
    return 0;
}