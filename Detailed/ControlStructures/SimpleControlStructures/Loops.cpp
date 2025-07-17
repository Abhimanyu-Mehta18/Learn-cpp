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
    // ~ Loops -
    cout << "Loops: " << endl;
    // ? For loop
    cout << "For loops: " << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << "5 x " << i << " = " << 5*i << endl;
    }
    // ? While loop
    cout << "While loops: " << endl;
    // ! Condition is checked first in while loop

    string while_loop_name;
    cout << "Name: ";
    cin >> while_loop_name;
    while (while_loop_name != "abhi")
    {
        cout << "Hello World" << endl;
        cin >> while_loop_name;
    }
    // ? Do while loop
    cout << "Do while loops: " << endl;
    // ! Condition is checked after the iteration 

    string do_while_loop_name;
    cout << "Name: ";
    cin >> do_while_loop_name;
    do
    {
        cout << "Hello World" << endl;
        cin >> do_while_loop_name;
    } while (do_while_loop_name != "abhi");

    return 0;
}