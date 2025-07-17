// ! (!) - Important comments valueable information
// & (?) - Heading 
// * (*) - Sub heading
// ~ (~) - Bullets 
// ? (?) - Dots
// ^ (^) - Example/Explanation 

#include<iostream>
using namespace std;

// & Multiple inheritance -
class BaseClass1 {
    public:
    // ^ Overriding function hello
        void hello() {
            cout << "BaseClass1 says hello" << endl;
        }
        void displayText() {
            string name;
            cout << "Enter your name here: " << endl;
            cin >> name;
            cout << "Your name is: " << name << endl;
        }
};

class BaseClass2 {
    public:
        void hello() {
                cout << "BaseClass2 says hello" << endl;
        }
        void displayAge() {
            string age;
            cout << "Enter your age here: " << endl;
            cin >> age;
            cout << "Your age is: " << age << endl;
        }
};
class DerivedClass: public BaseClass1, public BaseClass2 {
    public:
    // ^ If I override the function in the derived class then it will call the derived class function
    // ^ Else it will throw an error

    // ^ To avoid that you can either specify which class member function you have to call
    // ^ or you will have to override that function in the derived class also
        void hello() {
            // ^ Different defination of the function -
                cout << "Derived class says hello" << endl;
            // ^ You can also specify the class -
            // ^ (::) it is known as Scope Resolution Operator 
                BaseClass1::hello();
                BaseClass2::hello();
        }
        // ^ Comment void hello function and it will throw an error
};

int main()
{
    // ~ Multiple inheritance - 2 base classes and 1 child class 
    /* 
    ^ a class can be derived from more than one parent. 
    ^ For example, A class Bat is derived from base classes Mammal and WingedAnimal.
    ^ It makes sense because bat is a mammal as well as a winged animal.
    */
    // ^ Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.

    DerivedClass objDerivedClass;
    // ^ Inheritance works fine -
    objDerivedClass.displayAge();
    objDerivedClass.displayText();
    // ^ Overridden function -
    objDerivedClass.hello();
    return 0;
}