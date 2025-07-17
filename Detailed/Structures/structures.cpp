// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

struct person
{
    char userName[100];
    int age;
    int favouriteNumber;
};

int main()
{
    // & Structures (structure created above (line - 118)) -
    // ^ User defined data types are known as structures -
    // ! classes are used insted of structures 
    person p1;
    cout << "Enter your name, age and favourite number: " << endl;
    cout << "Enter your name: " << endl;
    cin.getline(p1.userName, 100);
    cout << "Enter your age: " << endl;
    cin >> p1.age;
    cout << "Enter you favourite number" << endl;
    cin >> p1.favouriteNumber;

    cout << "Your details: " << endl << "Name: " << p1.userName << endl << "Age: " << p1.age << endl << "Favourite number: " << p1.favouriteNumber << endl;
    return 0;
}