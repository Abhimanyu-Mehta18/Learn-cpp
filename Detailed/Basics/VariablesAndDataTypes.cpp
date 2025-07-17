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
    // & Variables and datatypes -

    // * Integer number

    int v1 = 12;
    // * Decimal number

    float v2 = 12.2;
    // * Decimal number which can store greater values that cannot be stored in float

    double v3 = 12.2211;
    // * sequence of alphabets

    string v4 = "This is a string";
    // * Char will only display the last character of the string

    char v5 = 'A';
    // * Boolean

    bool v6 = false;
    cout << "Int: " << v1 << endl << "Float: " << v2 << endl << "Double: " << v3 << endl << "String: " << v4 << endl << "Char: " << v5 << endl << "Bool: " << v6 << endl;
    
    // & Length/size of a string -
    string strLength = "Hi this is a string";
    cout << "Length of the string - " << strLength << endl;
    cout << strLength.length() << endl; // ! you can also use strLength.size() to get the length of the string

    // & Size of other datatypes -
    cout << sizeof(v1) << endl;
    cout << sizeof(v2) << endl;
    cout << sizeof(v3) << endl;

    return 0;
}